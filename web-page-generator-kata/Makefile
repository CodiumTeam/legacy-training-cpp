default: build run

# Local commands
build:
	@g++ -std=c++11 -Wall -Werror -O src/*.cpp -o bin/web_page_generator

.PHONY: run
run:
	@./bin/web_page_generator
	@echo "Open file: html/users.html to view the generated static web page."

# Docker commands
docker-run:
	docker run -it --rm -v ${PWD}:/usr/src/myapp -w /usr/src/myapp gcc make
win-docker-run:
	docker run -it --rm -v %cd%:/usr/src/myapp -w /usr/src/myapp gcc make