default: build run

build:
	@g++ -Wall -Werror -O src/*.cpp -o bin/web_page_generator

.PHONY: run
run:
	@./bin/web_page_generator
	@echo "Open file: html/users.html to view the generated static web page."
