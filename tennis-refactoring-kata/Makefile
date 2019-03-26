run.tests.output : build
	./bin/tests

build : tests/*.cpp src/*.cc
	g++ -Wall -Werror -O tests/*.cpp -o bin/tests
