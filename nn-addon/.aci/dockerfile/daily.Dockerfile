# FROM reg.docker.alibaba-inc.com/opencc/common:stable
ARG IMAGE_BASE=reg.docker.alibaba-inc.com/avh/avh:dev
FROM ${IMAGE_BASE}

ARG DATE="ontime"
ARG PACKAGE="nn-addon.tar.gz"
ARG TEST_CASE=""

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /app

ENV LOG_PATH=/app/log
ENV LOG_FILE=${LOG_PATH}/${DATE}.log

ADD ${PACKAGE} /app/nn-addon/
COPY testCase.sh /app

RUN mkdir -p ${LOG_PATH} && touch ${LOG_FILE}

CMD ./testCase.sh ${LOG_FILE}