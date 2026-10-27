# ACE + Cheddar：H20 构建

需要 Git、Docker 和网络连接。获取代码：

```bash
git clone --single-branch --branch ace_cheddar git@github.com:zggl404/ace-compiler.git ace_cheddar
cd ace_cheddar
```

## 1. 构建镜像

在 `ace_cheddar/` 目录执行：

```bash
docker build --platform linux/amd64 --build-arg BUILD_JOBS=4 -t ace-cheddar:h20 .
```

构建会自动复制源码和测试集，安装依赖并编译 ACE 与 Cheddar。
默认使用 32 位 Cheddar，CUDA 目标为 H20 的 `sm_90`。

需要 64 位时改用：

```bash
docker build --platform linux/amd64 --build-arg BUILD_JOBS=4 \
  --build-arg CHEDDAR_WORD_BITS=64 -t ace-cheddar:h20-64 .
```

## 2. 编译 ResNet20

进入容器；64 位构建将镜像名改为 `ace-cheddar:h20-64`：

```bash
docker run --rm --platform linux/amd64 -it ace-cheddar:h20
```

在容器内执行：

```bash
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
  --num 1 --skip-run
```

`--skip-run` 只生成代码、编译和链接，不执行推理。生成的可执行文件为：

```text
/app/ace-compiler/release/rtlib/build/example/resnet20_cifar10_gpu
```

编译其他模型时，将 `--model resnet20` 改为 `resnet32`、`resnet44`、
`resnet56` 或 `resnet110`。仅 SSF 配置需删除 `--sbm`，并将 `bnl=19` 改为 `bnl=21`。
