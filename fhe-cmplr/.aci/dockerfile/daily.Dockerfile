# FROM reg.docker.alibaba-inc.com/opencc/common:stable
ARG IMAGE_BASE=reg.docker.alibaba-inc.com/avh/avh:dev
FROM ${IMAGE_BASE}

ARG CTI="cti.tar.gz"
ARG AVHC="fhe_cmplr.tar.gz"

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /app

ADD ${CTI} /app/cti/
ADD ${AVHC} /opt/avhc/

WORKDIR /app/cti