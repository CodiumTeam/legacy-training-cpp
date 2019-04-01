default: build tests

build:
	@g++ -std=c++11 -Wall -Werror -O tests/*.cpp -o bin/tests

.PHONY: tests
tests:
	@./bin/tests

docker-tests:
	docker run -v $(shell pwd):/opt/project -w /opt/project gcc make
