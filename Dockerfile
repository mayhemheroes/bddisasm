FROM --platform=linux/amd64 ubuntu:20.04

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y make cmake clang pkgconf git

RUN git clone https://github.com/Tencent/rapidjson.git
WORKDIR /rapidjson
RUN cmake .
RUN make
RUN make install

ADD . /repo
WORKDIR /repo/build
RUN cmake ..
RUN make -j8
