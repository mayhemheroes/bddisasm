FROM --platform=linux/amd64 ubuntu:20.04 as builder

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

RUN mkdir -p /deps
RUN ldd /repo/build/disasmtool_lix/disasmtool | tr -s '[:blank:]' '\n' | grep '^/' | xargs -I % sh -c 'cp % /deps;'

FROM ubuntu:20.04 as package

COPY --from=builder /deps /deps
COPY --from=builder /repo/build/disasmtool_lix/disasmtool /repo/build/disasmtool_lix/disasmtool
ENV LD_LIBRARY_PATH=/deps
