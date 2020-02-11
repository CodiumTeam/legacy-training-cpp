FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake

RUN git clone https://github.com/google/googletest /gtest
RUN cd /gtest && git checkout release-1.8.1
RUN cd /gtest/googletest/make && make