# Build from ace_cheddar/: docker build --platform linux/amd64 -t ace-cheddar:h20 .
FROM nvidia/cuda:12.8.1-base-ubuntu22.04

ARG CUDA_ARCHITECTURES=90
ARG CHEDDAR_WORD_BITS=32
ARG BUILD_JOBS=8

ENV DEBIAN_FRONTEND=noninteractive \
    PATH=/usr/local/cuda/bin:${PATH} \
    RTLIB_CHEDDAR_SOURCE_DIR=/app/cheddar-fhe \
    ACE_ROOT=/app/ace-compiler \
    ACE_BUILD_DIR=/app/ace-compiler/release \
    CHEDDAR_WORD_BITS=${CHEDDAR_WORD_BITS} \
    CMAKE_BUILD_PARALLEL_LEVEL=${BUILD_JOBS} \
    OMP_NUM_THREADS=8

SHELL ["/bin/bash", "-o", "pipefail", "-c"]

RUN apt-get update && apt-get install -y --no-install-recommends \
        cuda-nvcc-12-8 cuda-cudart-dev-12-8 cuda-cccl-12-8 \
        build-essential ca-certificates git wget time pkg-config \
        python3 python3-dev python3-pip pybind11-dev \
        nlohmann-json3-dev libprotobuf-dev protobuf-compiler \
        libssl-dev libgmp-dev libntl-dev libomp-dev \
    && rm -rf /var/lib/apt/lists/*

# The existing ResNet inference CLI needs only stdlib Python; the compiler's
# code generators additionally need PyYAML. No Python training stack is needed.
RUN python3 -m pip install --no-cache-dir cmake==3.29.6 PyYAML==6.0.2

COPY ace-compiler/ /app/ace-compiler/
COPY cheddar-fhe/ /app/cheddar-fhe/
WORKDIR /app/ace-compiler

RUN cmake -S fhe-cmplr -B release \
        '-DFHE_WITH_SRC=air-infra;nn-addon' \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_UNITTEST=OFF -DBUILD_BENCH=OFF \
        -DAIR_BUILD_TEST=OFF -DNN_BUILD_TEST=OFF -DFHE_BUILD_TEST=OFF \
        -DAIR_BUILD_EXAMPLE=OFF -DNN_BUILD_EXAMPLE=OFF -DFHE_BUILD_EXAMPLE=ON \
        -DAIR_CODE_CHECK=OFF -DNN_CODE_CHECK=OFF -DFHE_CODE_CHECK=OFF \
        -DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF \
        -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF \
        -DFHE_ENABLE_CHEDDAR=ON -DFHE_ENABLE_CUDA=ON \
        -DCMAKE_CUDA_COMPILER=/usr/local/cuda/bin/nvcc \
        -DCMAKE_CUDA_ARCHITECTURES=${CUDA_ARCHITECTURES} \
        -DRTLIB_CHEDDAR_STANDARD_ONLY=ON \
        -DRTLIB_CHEDDAR_WORD_BITS=${CHEDDAR_WORD_BITS} \
    && cmake --build release --target fhe_cmplr --parallel ${BUILD_JOBS}

COPY cifar/ /app/cifar/
RUN echo '8e2eb146ae340b09e24670f29cabc6326dba54da8789dab6768acf480273f65b  /app/cifar/test_batch.bin' \
    | sha256sum --check -

CMD ["/bin/bash"]
