FROM ubuntu:18.04

RUN apt-get update && \
    apt-get install -y gcc-3.4 g++-3.4

RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-3.4 50 && \
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-3.4 50

COPY string.c /usr/src/string.c

WORKDIR /usr/src

RUN gcc string.c -o dccomp

# CMD ["./hello"]