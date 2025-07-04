# Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

FROM ubuntu:20.04

# Install tzdata without user input
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get -qqy install tzdata

# Build tool
RUN apt-get update && apt-get -qqy install build-essential cmake scons git lcov g++-arm-linux-gnueabihf g++-aarch64-linux-gnu pkg-config

# Debian build tool
RUN apt-get update && apt-get -qqy install fakeroot devscripts debhelper python3-all dh-python

# Install extra dependencies (Caffe, nnkit)
RUN apt-get update && apt-get -qqy install libboost-all-dev libgflags-dev libgoogle-glog-dev libatlas-base-dev libhdf5-dev

# Install protocol buffer
RUN apt-get update && apt-get -qqy install libprotobuf-dev protobuf-compiler

# Additonal tools
RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive \
    apt-get -qqy install doxygen graphviz wget zip unzip python3 python3-pip python3-venv python3-dev hdf5-tools curl
RUN python3 -m pip install --upgrade pip
RUN python3 -m pip install numpy flatbuffers

# Install libtsan_preinit.o manually (workaround for missing package in focal)
WORKDIR /root/tmp
RUN apt-get download libgcc-10-dev
RUN dpkg -x libgcc-10-dev_*.deb .
RUN find usr -name "libtsan_preinit.o" | xargs -i cp {} .
RUN find usr -name "libtsan_preinit.o" | sed -e "s/10/9/g" | xargs -i cp libtsan_preinit.o /{}
WORKDIR /root
RUN rm -rf /root/tmp

# Setup user to match host user, and give superuser permissions
ARG USER_ID=1000
ARG GROUP_ID=${USER_ID}
RUN apt-get update && apt-get -qqy install sudo
RUN addgroup --gid ${GROUP_ID} ubuntu && adduser --disabled-password --gecos '' --uid ${USER_ID} --gid ${GROUP_ID} ubuntu && usermod -aG sudo ubuntu
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
RUN echo 'ubuntu ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

# Clean archives (to reduce image size)
RUN apt-get clean -y

# Set user to the one we just created
USER ${USER_ID}
WORKDIR /home/ubuntu
