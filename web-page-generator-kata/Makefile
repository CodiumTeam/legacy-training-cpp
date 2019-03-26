run.tests.output : build
	@./bin/web_page_generator
	@echo "Open file: html/users.html to view the generated static web page."

build : src/*.cpp
	@g++ -std=c++11 -Wall -Werror -O src/*.cpp -o bin/web_page_generator
