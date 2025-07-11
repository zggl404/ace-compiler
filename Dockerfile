FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# Install the necessary packages and tools
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        time git curl wget \
        build-essential gcc g++ clang-15 \
        cmake make ninja-build scons \
        python3 python3-dev python3-pip golang \
        libprotobuf-dev protobuf-compiler libssl-dev libtool \
        libgmp3-dev libomp5 libomp-dev libntl-dev pybind11-dev fontconfig && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

# Update Font
RUN ln -s /usr/bin/python3 /usr/bin/python && \
    echo "ttf-mscorefonts-installer msttcorefonts/accepted-mscorefonts-eula select true" | debconf-set-selections && \
    apt-get update && \
    apt-get install -y --reinstall ttf-mscorefonts-installer && \
    fc-cache -f -v && rm -rf ~/.cache/matplotlib && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

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
    pip install --upgrade pip setuptools wheel && \
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

# Set working directory
WORKDIR /app
