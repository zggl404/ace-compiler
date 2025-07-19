FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

# Install the necessary packages and tools
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        software-properties-common \
        time git curl wget gnupg tar \
        build-essential gcc g++  \
        cmake make ninja-build \
        libprotobuf-dev protobuf-compiler libssl-dev libtool \
        libgmp3-dev libomp5 libomp-dev libntl-dev pybind11-dev fontconfig && \
    apt-get clean

# Update extra package
RUN wget https://apt.llvm.org/llvm-snapshot.gpg.key && \
    apt-key add llvm-snapshot.gpg.key && \
    apt-add-repository "deb http://apt.llvm.org/focal/ llvm-toolchain-focal-15 main" && \
    add-apt-repository ppa:deadsnakes/ppa && \
    echo "ttf-mscorefonts-installer msttcorefonts/accepted-mscorefonts-eula select true" | debconf-set-selections

# Update Font & install clang-15, python3.10
RUN apt-get update && \
    apt-get install -y clang-15 \
	python3.10 python3.10-distutils python3.10-dev && \
    apt-get install -y --reinstall ttf-mscorefonts-installer && \
    fc-cache -f -v && rm -rf ~/.cache/matplotlib && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.10 1 && \
    ln -s /usr/bin/python3 /usr/bin/python && \
    wget https://bootstrap.pypa.io/get-pip.py && \
    python3 get-pip.py && \
    rm get-pip.py

ENV GO_VERSION 1.18.1
RUN wget https://go.dev/dl/go$GO_VERSION.linux-amd64.tar.gz && \
    tar -C /usr/local -xzf go$GO_VERSION.linux-amd64.tar.gz && \
    rm go$GO_VERSION.linux-amd64.tar.gz
ENV PATH="/usr/local/go/bin:${PATH}"

# Set the initial working directory
WORKDIR /app

# Copy ace-compiler, scripts and set permissions
COPY README.md .
COPY air-infra ace-compiler/air-infra/
COPY nn-addon ace-compiler/nn-addon/
COPY fhe-cmplr ace-compiler/fhe-cmplr/
COPY proof ace-compiler/proof/
COPY scripts/* /app/scripts/
RUN chmod +x /app/scripts/fhelipe.sh \
        /app/scripts/build_cmplr.sh \
        /app/scripts/mkr.sh \
        /app/scripts/bsgs.sh \
        /app/scripts/run_mini.sh \
        /app/scripts/run_full.sh \
        /app/ace-compiler/proof/BSGS/mvm1/b.sh \
        /app/ace-compiler/proof/BSGS/mvm2/b.sh && \
    pip install --no-cache-dir -r /app/scripts/requirements.txt

# Clone and prepare fhelipe repository
WORKDIR /app/FHELIPE
RUN git clone https://github.com/fhelipe-compiler/fhelipe.git && \
    cd fhelipe && \
    git checkout 6afbd1c && \
    git apply /app/scripts/mkr.patch && \
    pip install -e frontend && \
    pip cache purge

# Copy submodule and build fhelipe
WORKDIR /app/FHELIPE/fhelipe/backend
ADD scripts/aws-cppwrapper-lattigo.tgz .
RUN export GOFLAGS="-buildvcs=false" && \
    CORES=$(nproc) && \
    scons lib && \
    scons deps --no-deps-pull && \
    scons -j${CORES} --release

RUN pip install torchsummary==1.5.1

# Set working directory
WORKDIR /app
