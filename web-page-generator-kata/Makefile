run.tests.output : build
	@./bin/web_page_generator

build : src/*.cpp
	@g++ -std=c++11 -Wall -Werror -O src/*.cpp -o bin/web_page_generator
