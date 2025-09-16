# ubuntu:24.04
ARG IMAGE_BASE=ubuntu:24.04
FROM ${IMAGE_BASE}

ARG CI_TOKEN=""
ENV CI_TOKEN=${CI_TOKEN}
ENV DEBIAN_FRONTEND=noninteractive

# setting zone
ENV TZ=Asia/Shanghai
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

# Install the necessary packages and tools
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        git curl wget emacs vim gdb time doxygen graphviz autoconf \
        build-essential gcc g++ clang-15 nlohmann-json3-dev \
        cmake make ninja-build \
        python3 python3-dev python3-pip python3-venv pylint \
        libprotobuf-dev protobuf-compiler libssl-dev libtool \
        libgmp3-dev libomp5 libomp-dev libntl-dev pybind11-dev && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

# add scipt for clone avhc repos
WORKDIR /root
#COPY scripts/clone_ace.sh scripts/clone_ace-hpu.sh /usr/local/bin
COPY requirements.txt requirements.txt
RUN python3 -m venv .pyenv && \
    /root/.pyenv/bin/pip config set global.index-url https://mirrors.aliyun.com/pypi/simple/ && \
    /root/.pyenv/bin/pip install --no-cache-dir -r requirements.txt

# install library
#ADD llvm.tar.gz /opt/llvm/
#ADD seal.tar.gz /opt/fhe_lib/seal/
#ADD openfhe.tar.gz /opt/fhe_lib/openfhe/
#ADD openfhe_omp.tar.gz /opt/fhe_lib/openfhe_omp/

#ENV PATH="/root/.pyenv/bin:/opt/llvm/bin:${PATH}"
#ENV RTLIB_SEAL_PATH="/opt/fhe_lib/seal"
#ENV RTLIB_OPENFHE_PATH="/opt/fhe_lib/openfhe"
#ENV RTLIB_OPENFHE_OMP_PATH="/opt/fhe_lib/openfhe_omp"

WORKDIR /app
