default: build tests

build:
	@g++ -std=c++11 -Wall -Werror -O src/*.cpp tests/*.cpp -o bin/tests

.PHONY: tests
tests:
	@./bin/tests

docker-tests:
	docker run -v ${PWD}:/opt/project -w /opt/project gcc make

win-docker-tests:
	docker run -v %cd%:/opt/project -w /opt/project gcc make
