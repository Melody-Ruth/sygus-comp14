FROM --platform=linux/x86_64 ubuntu:22.04
RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y build-essential \
                           python3 \
                           python3-pip \
                           python3-dev \
                           libconfig-dev \
                           gdb \
                           git \
                           libboost-all-dev \
                           bison \
                           flex \
                           python2 \
                           z3
