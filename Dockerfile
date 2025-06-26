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

# COPY script 
COPY scripts/* /app/scripts/
RUN chmod +x /app/scripts/fhelipe.sh /app/scripts/build_cmplr.sh
RUN pip install --upgrade pip setuptools wheel && \
    pip install --no-cache-dir -r /app/scripts/requirements.txt

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
ADD scripts/aws-cppwrapper-lattigo.tgz /app/FHELIPE/fhelipe/backend
WORKDIR /app/FHELIPE/fhelipe/backend
RUN export GOFLAGS="-buildvcs=false" && \
    scons lib && \
    scons deps --no-deps-pull && \
    scons -j16 --release


WORKDIR /app
COPY air-infra ace-compiler/air-infra/
COPY nn-addon ace-compiler/nn-addon/
COPY fhe-cmplr ace-compiler/fhe-cmplr/
RUN pip install --no-cache-dir -r scripts/requirements.txt
# && \
#    cmake -S ace-compiler/fhe-cmplr -B release -DFHE_WITH_SRC="air-infra;nn-addon" -DCMAKE_BUILD_TYPE=Release && \
#    cmake --build release -j

# COPY readme
COPY README.md .


