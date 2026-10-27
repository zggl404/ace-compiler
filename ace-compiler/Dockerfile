# ubuntu:22.04
FROM nvidia/cuda:12.2.0-devel-ubuntu22.04

ENV DEBIAN_FRONTEND=noninteractive

# install common tools
RUN find /etc/apt -type f \( -name '*.list' -o -name '*.sources' \) \
      -exec sed -i \
        -e 's|http://archive.ubuntu.com/ubuntu|https://mirrors.tuna.tsinghua.edu.cn/ubuntu|g' \
        -e 's|http://ports.ubuntu.com/ubuntu-ports|https://mirrors.tuna.tsinghua.edu.cn/ubuntu-ports|g' \
        -e 's|http://security.ubuntu.com/ubuntu|https://mirrors.tuna.tsinghua.edu.cn/ubuntu|g' {} + && \
    apt-get update && \
    apt-get install -y git vim wget time \
                        build-essential \
                        gcc \
                        g++ \
                        cmake \
                        ninja-build \
                        python3 \
                        python3-pip \
                        python3-dev \
                        pybind11-dev \
                        nlohmann-json3-dev \
                        libprotobuf-dev  \
                        protobuf-compiler \
                        libssl-dev  \
                        libgmp3-dev  \
                        libtool \
                        libomp5 \
                        libomp-dev \
                        libntl-dev && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

RUN pip3 install PyYAML==5.3.1 &&\
    pip3 install cmake==3.29.6 && \
    pip3 install torch==2.0.1 && \
    pip3 install onnx==1.14.1 && \
    pip3 install onnxruntime==1.15.1 && \
    pip3 install matplotlib==3.7.5 && \
    pip3 install numpy==1.24.4 && \
    pip3 install torchvision==0.15.2 && \
    pip3 install pybind11==2.13.1 && \
    rm -rf /root/.cache/pip

WORKDIR /app/cifar

RUN wget -qO- https://www.cs.toronto.edu/~kriz/cifar-10-binary.tar.gz | tar xzv --strip-components=1 && \
    wget -qO- https://www.cs.toronto.edu/~kriz/cifar-100-binary.tar.gz | tar xzv --strip-components=1 && \
    wget https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz && \
    wget https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz

# copy soucecode & scipt
WORKDIR /app

COPY ./ .
