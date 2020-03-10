# PrintDate

## Goals
Be able to test printCurrentDate function without changing the method signature.

1.- Test the code using test doubles created by you.

2.- Test the code using test doubles created using a test library.

## Run the tests

**Locally** with Cpp on Linux and Mac

    ./run-once.sh

**Docker**
Generate the docker image

    make docker-build

on **Linux and Mac**

    make docker-run

on **Windows**

    docker build . -t gcc-googletest

    docker run -v %cd%:/opt/project -w /opt/project gcc-googletest ./run-once.sh
    