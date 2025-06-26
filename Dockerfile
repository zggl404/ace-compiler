FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get -y update && \
    apt-get -y upgrade && \
    apt-get -y install build-essential clang-15 golang cmake ninja-build \
        python3-venv scons curl git time \
        wget gcc g++ python3 python3-pip python3-dev  \
        libprotobuf-dev protobuf-compiler libssl-dev \
	libgmp3-dev libtool libomp5 libomp-dev libntl-dev pybind11-dev && \
    apt-get clean && rm -rf /var/lib/apt/lists/*


ENV PIP_NO_CACHE_DIR 1

RUN pip install --upgrade pip setuptools wheel

RUN set -ex && \
    pip install \
        PyYAML==5.3.1 \
        onnx==1.14.1 \
        onnxruntime==1.15.1 \
        matplotlib==3.7.5 \
        numpy==1.24.4 \
        plottable \
        psutil && \
    pip install \
        torch==2.0.1+cpu \
        torchvision==0.15.2+cpu \
        --index-url https://download.pytorch.org/whl/cpu \
        --extra-index-url https://pypi.org/simple

# COPY script 
COPY scripts/* /app/scripts/
RUN chmod +x /app/scripts/fhelipe.sh /app/scripts/build_cmplr.sh

# clone fhelipe, apply patch
WORKDIR /app/FHELIPE/
RUN git clone https://github.com/fhelipe-compiler/fhelipe.git 
WORKDIR /app/FHELIPE/fhelipe
RUN git checkout 6afbd1c && git apply /app/scripts/mkr.patch
WORKDIR /app/FHELIPE/fhelipe/backend

WORKDIR /app/FHELIPE/
RUN python3 -m venv fhenv
ENV PATH="/app/FHELIPE/fhenv/bin:$PATH"

WORKDIR /app/FHELIPE/fhelipe
RUN pip install -e frontend/ && pip cache purge

# build fhelipe
# copy submodudle due to network issue
ADD scritps/aws-cppwrapper-lattigo.tgz /app/FHELIPE/fhelipe/backend
WORKDIR /app/FHELIPE/fhelipe/backend
RUN scons lib
RUN scons deps --no-deps-pull
RUN scons -j16 --release


WORKDIR /app
RUN git clone -b metakernel-proof https://github.com/ant-research/ace-compiler.git

# COPY onnx model
COPY model /app/model
# COPY readme model
COPY README.md .


