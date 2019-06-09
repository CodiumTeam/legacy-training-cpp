FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake

RUN git clone https://github.com/google/googletest /gtest
RUN cd /gtest/googletest/make && make