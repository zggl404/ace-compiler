# ACE + Cheddar：H20 构建与运行

需要 Git、Docker 和网络连接。获取代码：

```bash
git clone --single-branch --branch ace_cheddar git@github.com:zggl404/ace-compiler.git ace_cheddar
cd ace_cheddar
```

## 1. 构建镜像

```bash
docker build --platform linux/amd64 --build-arg BUILD_JOBS=4 -t ace-cheddar:h20 .
```

构建会复制两份源码和 CIFAR-10 测试集，安装依赖并编译 ACE 与 Cheddar。
默认使用 32 位 Cheddar、CUDA 12.8.1，CUDA 目标为 H20 的 `sm_90`。

需要 64 位时改用：

```bash
docker build --platform linux/amd64 --build-arg BUILD_JOBS=4 \
  --build-arg CHEDDAR_WORD_BITS=64 -t ace-cheddar:h20-64 .
```

服务器已有同名基础镜像时可直接复用。若将 `FROM` 换成 CUDA 12.8.1 的
Ubuntu 22.04 `devel` 镜像，可删除安装列表中的
`cuda-nvcc-12-8 cuda-cudart-dev-12-8 cuda-cccl-12-8`。

## 2. 启动 GPU 容器并保留结果

在宿主机的仓库目录执行：

```bash
mkdir -p results
docker run --rm --gpus all --platform linux/amd64 \
  -v "$PWD/results:/results" -it ace-cheddar:h20
```

64 位镜像将名称改为 `ace-cheddar:h20-64`。GPU 服务器需配置 NVIDIA 驱动和
NVIDIA Container Toolkit。容器启动后位于 `/app/ace-compiler`，先检查：

```bash
nvidia-smi
```

后续结果写入 `/results`，对应宿主机的 `results/`，退出容器后仍保留。
本地没有 GPU、只做编译时，去掉 Docker 命令中的 `--gpus all`，并在下面的
Python 命令末尾加 `--skip-run`。

## 3. 基础命令：ResNet20 单张推理并计时

在容器中执行：

```bash
mkdir -p /results
ACE_RTLIB_TIMING_SKIP_FIRST_IMAGE=0 \
/usr/bin/time -f 'command_total_sec=%e' -o /results/resnet20_command_total.txt \
python3 scripts/ace_resnet_cifar10_infer.py \
  --compiler release/driver/fhe_cmplr \
  --build-dir release \
  --backend cheddar \
  --cheddar-word-bits "$CHEDDAR_WORD_BITS" \
  --model resnet20 \
  --ckks=-CKKS:q0=60:sf=50:N=65536:bes=55:bnl=19:bmr=10 \
  --vec=-VEC:conv_parl:ssf \
  --sbm --rot-key-mode full --omp-threads 8 \
  --cifar10 /app/cifar/test_batch.bin \
  --num 1 \
  --encode-mode ondemand \
  --capture-timing \
  --timing-json /results/resnet20_timing.json \
  2>&1 | tee /results/resnet20.log
```

这条命令会编译模型、编译链接 CUDA 程序，再执行一张图片的推理。
`--num` 控制图片数量，`--index` 控制起始索引，默认从第 0 张开始。

主要配置如下：

| 参数 | 含义 |
|---|---|
| `q0=60`、`sf=50` | 首个逻辑模数目标 60 bit，常规计算目标 scale 约为 2^50 |
| `N=65536` | 环维数 65,536，对应最多 32,768 个复数槽位 |
| `bes=55`、`bnl=19`、`bmr=10` | Boot EvalMod scale 为 55 bit，normal level 请求为 19，message ratio 的 log2 值为 10 |
| `conv_parl:ssf` | 卷积 parallel lowering 和快速 strided_slice |
| `--sbm` | 启用区域 scale/bootstrap 联合规划；当前采用 SBM+SSF |
| `--rot-key-mode full` | 为实际需要的旋转步长准备直接旋转密钥 |
| `--omp-threads 8` | 为运行程序设置 CPU 侧 `OMP_NUM_THREADS=8` |
| `--cheddar-word-bits` | 必须与镜像内运行库的 32/64 位配置一致，镜像环境变量已设置好 |

编译其他模型时，将 `--model resnet20` 改为 `resnet32`、`resnet44`、
`resnet56` 或 `resnet110`。仅 SSF 配置需删除 `--sbm`，并将 `bnl=19` 改为 `bnl=21`。

## 4. 控制预编码

在 Python 命令中选择：

| 模式 | 参数 |
|---|---|
| 按需编码，默认模式 | `--encode-mode ondemand` |
| 最多预编码前 64 个条目 | `--encode-mode pre --pre-encode-count 64` |
| 尝试预编码全部条目 | `--encode-mode pre --pre-encode-count 0` |

`--encode-mode pre` 省略数量时默认上限为 64；`0` 表示不设数量上限，不是关闭。
数量指明文数据条目，不是图片张数。实际完成数量查看日志：

```text
[pt_mgr] pre-encoded X/Y entries
```

提前编码部分发生在主图外，并缓存结果；主图中仍可能有其他运行期编码。

## 5. 读取时间结果

`--capture-timing` 会在终端打印计时摘要，`--timing-json` 保存结构化结果，
其中每个模型包含 `system` 和 `rtlib.entries`。

| 指标 | 统计范围 |
|---|---|
| `MAIN_GRAPH` 的 `exclusive_ms` | 主图累计时间，单位 ms，包含主图内发生的编码 |
| `MAIN_GRAPH` 的 `avg_ms` | 主图累计时间除以 `count`，即每张图片平均主图时间 |
| `system.wall_time_sec` | 推理可执行程序总时间，包含初始化、keygen、预编码、输入准备、推理、解密及释放；不包含模型编译和链接 |
| `command_total_sec` | 整条 Python 命令总时间，包含模型编译、链接和程序运行，由外层 `/usr/bin/time` 写入文本文件 |
| `PT_ENCODE_DATA`、`PT_ENCODE_MASK` | 明文编码子项耗时；未清零计数时可能包含主图外的预编码，不能直接全部当作主图内编码 |

看 `MAIN_GRAPH` 时选择 `count` 为数字的条目；`MAIN_GRAPH sub total` 是子项
汇总，不是整图总时间。子项与主图存在包含关系，不要再次相加。
初始化、keygen、预编码目前没有完整拆成独立阶段计时。

测量平均值时，运行 11 张图片，并在 Python 命令前设置
`ACE_RTLIB_TIMING_SKIP_FIRST_IMAGE=1`：第一张完成后重置运行库计数，
剩余 10 张用于统计，此时 `MAIN_GRAPH count` 应为 10。
`wall_time_sec` 和 `command_total_sec` 仍包含预热，不能直接除以 10 当作单图延迟。

当前 `MAIN_GRAPH` 使用主机侧时钟，边界没有显式 CUDA 同步；严格测量 GPU
完成时间需另加同步或 CUDA Events，参见 [NVIDIA 计时说明](https://docs.nvidia.com/cuda/cuda-c-best-practices-guide/index.html#timing)。

## 6. 最终批量脚本：ResNet20–110

[run_resnets_timed.sh](ace-compiler/scripts/run_resnets_timed.sh) 已随源码复制到镜像。
更新代码后需重新构建镜像，使新脚本进入容器。在 GPU 容器中运行：

```bash
bash scripts/run_resnets_timed.sh
```

脚本依次运行 ResNet20、32、44、56、110；每个模型配置为：

- SBM+SSF，`q0=60`、`sf=50`、`N=65536`、`bes=55`、`bnl=19`、`bmr=10`。
- Full key，`--encode-mode pre --pre-encode-count 0`。
- 第 0 张预热，第 1–10 张正式测量。
- 独立捕获主图、推理程序总时间和包含编译链接的命令总时间。

默认结果目录为 `/results/resnet_fullkey_pre_日期_时间/`，每个模型一个子目录：

| 文件 | 内容 |
|---|---|
| `run.log` | 完整输出、分类结果、预编码 X/Y 和计时摘要 |
| `timing.json` | 推理程序墙钟、MAIN_GRAPH 及运行库计时条目 |
| `command_total.txt` | 包含编译、链接和运行的命令总时间 |

可通过第一个参数指定输出目录，例如
`bash scripts/run_resnets_timed.sh /results/my_run`。
任一模型命令以非零状态退出时，脚本停止并保留已有日志；分类结果仍需查看
`run.log`。脚本不会启用算子融合、SlimBoot 或 RBoot。
