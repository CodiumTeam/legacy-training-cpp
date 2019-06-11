# Gilded Rose Golden master

## Description:
This kata has a legacy code to practice writing a Golden Master piece.

Write your code inside the GildedRoseTextTests.cc

# Business requirements
You don't need the business requirements.

## Goals:
- Write a code to generate an output that you need to be sure the code behaviour does not change.
- Write an script to automate the test execution.

## Run the tests

**Locally** with Cpp on Linux and Mac

    ./run-once.sh

**Docker**
Generate the docker image

    make docker-build

on **Linux and Mac**

    make docker-run

on **Windows**

    docker run -v %cd%:/opt/project -w /opt/project gcc-googletest ./run-once.sh
    
## Inspired by:
https://github.com/emilybache/GildedRose-Refactoring-Kata/

Emily Bache @emilybache