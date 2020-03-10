FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake build-essential

RUN git clone https://github.com/google/googletest /googletest
RUN mkdir -p /googletest/build
RUN cd /googletest/build && cmake .. -DBUILD_GMOCK=On
RUN cd /googletest/build && make
RUN echo "add_subdirectory(/opt/project/tests /opt/project/build)" >> /googletest/CMakeLists.txt