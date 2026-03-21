# Introduction

<b>ANT-ACE</b> is a Fully Homomorphic Encryption (FHE) Compiler Framework designed for automating Neural Network (NN) Inference. ANT-ACE accepts a pre-trained ONNX model as input and directly generates C/C++ programs to perform NN inference on encrypted data.

FHE represents a revolutionary cryptographic technology that enables direct computations on encrypted data without the need for decryption. This powerful technique allows for the manipulation of sensitive data while ensuring that the computing party remains unaware of the actual information, yet still produces valuable encrypted output.

<div align="center"><i>Decrypt(Homo_Add(Encrypt(a), Encrypt(b))) == Add(a, b)</i></div>
<div align="center"><i>Decrypt(Homo_Mult(Encrypt(a), Encrypt(b))) == Mult(a, b)</i></div>

ANT-ACE is tailored for Privacy-Preserving Machine Learning (PPML) Inference Applications. In this setup, ML inference operates in the cloud, enabling clients to upload their data and receive inference results. Typically, ML inference services transfer both data and results in plaintext, risking exposure to privacy breaches. Although traditional symmetric encryption secures data during transmission, it does not prevent privacy leaks within the cloud infrastructure. There is a risk that service providers might access the data, either inadvertently or with malicious intent. However, using homomorphic encryption allows ML inference to be performed directly on encrypted user data. This method ensures that sensitive user data is shielded from unauthorized access at all stages of the cloud-based inference process.

<p align="center"><img src="scripts/ace-ppml.png" width="40%"></p>

ANT-ACE takes a pre-trained ML model as input and compiles it into an FHE program directly for both the server side and client side. This makes ANT-ACE easily integrable into any existing ML framework, such as ONNX, PyTorch, TensorFlow, and others. In this way, the development of FHE applications is greatly simplified. As a result, developers won't need to understand the sophisticated mathematical foundations behind FHE, grasp the intricacies of effectively using FHE libraries, or manually manage trade-offs between correctness, security, and performance involving security parameter selection and complex optimizations regarding homomorphic operations such as noise and scale management. This significantly simplifies the development process for FHE applications.

<p align="center"><img src="scripts/ace-ml-integ.png" width="80%"></p>

Currently, ANT-ACE is designed with a compiler infrastructure that supports five levels of abstraction (i.e., five IRs) to compile pre-trained ML models operating on multi-dimensional tensors into low-level polynomial operations. These five phases successively translate pre-trained models into C/C++ programs by automatically performing various analyses and optimizations to make trade-offs between correctness, security, and performance.

<p align="center"><img src="scripts/ace-arch.png" width="90%"></p>


The ANT-ACE compiler framework marks an initial step in our FHE compiler technology research. We have developed fundamental capabilities for an FHE compiler focused on privacy-preserving machine learning inference, showcased through multiple abstraction levels that automate ONNX model inference using CKKS-encrypted data on CPUs. Future extensions of ANT-ACE will support various input formats and FHE schemes across different computing architectures, including GPUs, enhanced by contributions from open-source communities.
</div>
</div>

# Repository Overview
- **air-infra:** Contains the base components of the ACE compiler.
- **fhe-cmplr:** Houses FHE-related components of the ACE compiler.
- **FHE-MP-CNN:** Directory with EXPERT-implemented source code.
- **model:** Stores pre-trained ONNX models.
- **nn-addon:** Includes ONNX-related components for the ACE compiler.
- **scripts:** Scripts for building and running ACE and EXPERT tests.
- **README.md:** This README file.
- **Dockerfile:** File used to build the Docker image.
- **requirements.txt:** Specifies Python package requirements.

# Build ANT-ACE Compiler

## 1. Preparing a Docker environment to Build and Test the ANT-ACE Compiler

It's recommended to use a Docker environment to Build and Test the ANT-ACE Compiler. We provide the [*Dockerfile*](https://github.com/ant-research/ace-compiler/blob/main/Dockerfile) to build the Docker image. The docker image is based on Ubuntu 20.04. You may set up your own environment on other Linux platforms with necessary Linux and Python packages listed in [*Dockerfile*](https://github.com/ant-research/ace-compiler/blob/main/Dockerfile) and [*requirements.txt*](https://github.com/ant-research/ace-compiler/blob/main/requirements.txt). We recommended to pull the pre-built docker image (opencc/ace:latest) from Docker Hub:

```
mkdir ace-compiler && cd ace-compiler
docker pull opencc/ace:latest
docker run -it --name ace -v "$(pwd)":/app --privileged opencc/ace:latest bash
```
A local directory `ace-compiler` is created and mounted in the docker container. The container will launch and automatically enters the `/app` directory:
```
root@xxxxxx:/app#
```
Alternatively, if you encounter issues pulling the pre-built image, you can build the image from the [*Dockerfile*](https://github.com/ace-compiler/ace-compiler/blob/main/Dockerfile):
```
git clone https://github.com/ace-compiler/ace-compiler.git
cd ace-compiler
docker build -t ace:latest .
docker run -it --name ace -v "$(pwd)":/app --privileged ace:latest bash
```

## 2. Building the ACE Compiler
All helper scripts now live under `scripts/`. Run the build script from the repository root:

```bash
cd /path/to/ace-compiler
./scripts/build_cmplr.sh Release
```

Inside Docker, the equivalent command is still:

```bash
cd /app
./scripts/build_cmplr.sh Release
```

Upon successful completion, you will see output similar to:

```text
Info: build project succeeded. FHE compiler executable can be found in /path/to/ace-compiler/ace_cmplr/bin/fhe_cmplr
```

The compiler build directory is `<repo>/release` for `Release` builds and `<repo>/debug` for `Debug` builds. The installed compiler is placed under `<repo>/ace_cmplr/bin/fhe_cmplr`.

For a debug build, run:

```bash
./scripts/build_cmplr.sh Debug
```

Optionally, you can pick the FHE backend in the build script:

```bash
./scripts/build_cmplr.sh Release ant         # default
./scripts/build_cmplr.sh Release seal
./scripts/build_cmplr.sh Release openfhe
./scripts/build_cmplr.sh Release phantom-fhe 80
```

Notes:
- `ant` disables external FHE backends and is the default if backend is omitted.
- `seal` requires `RTLIB_SEAL_PATH` to be set.
- `openfhe` requires `RTLIB_OPENFHE_PATH` to be set.
- `phantom-fhe` enables CUDA/Phantom build path and requires CUDA arch setting.
  - Pass CUDA arch as the 3rd argument (for example: `80`, `86`, `89`, `90`), or set `CMAKE_CUDA_ARCHITECTURES`.
  - The script auto-detects `nvcc`; you can also set `CUDACXX=/path/to/nvcc` manually.
  - If your environment cannot access `code.alipay.com`, set one of:
    - `RTLIB_PHANTOM_SOURCE_DIR` (local phantom-fhe source directory), or
    - `RTLIB_PHANTOM_REPO_URL` (an accessible git URL mirror).

## 3. Compiling example models with `scripts/ace_compile.py`
The model compilation entry point is now `scripts/ace_compile.py`. It is designed to work both inside Docker and directly on the host machine, and it auto-detects the repository root from `ACE_ROOT` or the script location.

By default, the script resolves paths relative to its own location, so when run from this repository it uses:

- compiler: `<repo>/ace_cmplr/bin/fhe_cmplr`
- model directory: `<repo>/model`
- generated `.onnx.inc` directory: `<repo>/fhe-cmplr/rtlib/phantom/example`
- target build helper: `<repo>/scripts/build_target_gpu.sh`
- target build directory: `<repo>/release`

### 3.1 Compile and link one model

```bash
python3 scripts/ace_compile.py --model resnet20_cifar10
```

This command compiles `model/resnet20_cifar10_pre.onnx`, generates `resnet20_cifar10_gpu.onnx.inc`, and then invokes `scripts/build_target_gpu.sh` to build the GPU target. If `model/resnet20_cifar10_gpu.cu` does not exist, `scripts/ace_compile.py` automatically calls `scripts/onnx2c.py` to generate it first.

### 3.2 Compile all configured models

```bash
python3 scripts/ace_compile.py
```

### 3.3 Compile only, skip target build

```bash
python3 scripts/ace_compile.py --model resnet20_cifar10 --skip-link
```

Use this when you only want the generated `.onnx.inc` file. If you omit `--skip-link` and the matching `*_gpu.cu` target source is missing, `scripts/ace_compile.py` now auto-generates it through `scripts/onnx2c.py`.

### 3.4 Rebuild target from an existing `.onnx.inc`

```bash
python3 scripts/ace_compile.py --model resnet20_cifar10 --skip-compile
```

Use this when the generated include file already exists and you only want to rerun the target build step. If `model/resnet20_cifar10_gpu.cu` is missing, this command also auto-generates it via `scripts/onnx2c.py` before building.

### 3.5 Override default paths

```bash
python3 scripts/ace_compile.py \
  --root /path/to/ace-compiler \
  --compiler /path/to/fhe_cmplr \
  --model-dir /path/to/model \
  --link-dir /path/to/output \
  --build-dir /path/to/release \
  --model resnet20_cifar10
```

Supported options:

- `--root`: ACE repository root. Defaults to `ACE_ROOT` or the directory of `scripts/ace_compile.py`.
- `--compiler`: path to `fhe_cmplr`.
- `--model-dir`: directory containing `*_pre.onnx` and `*_gpu.cu`.
- `--link-dir`: output directory for generated `*.onnx.inc` files.
- `--build-script`: path to `scripts/build_target_gpu.sh`.
- `--build-dir`: build directory passed to `scripts/build_target_gpu.sh` through `ACE_BUILD_DIR`.
- `--model`: compile only the specified model; pass multiple times to build multiple models.
- `--keep`: keep compiler-generated intermediate `.t` and `.json` files.
- `--skip-link`: skip the target build step.
- `--skip-compile`: skip ONNX compilation and only build the target.

You can always inspect the latest CLI help with:

```bash
python3 scripts/ace_compile.py --help
```
