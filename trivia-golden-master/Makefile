FILES = GameRunner.cpp Game.cpp Game.h
CC = g++
OPTS = -std=c++17 -Wall -Wextra -Werror
OUTOPTS = -o 
OUT = out/trivia

all:
	@printf "$$HELP"

run: build execute

golden-master:
	make run

.outputFolder:
	mkdir -p out

build: .outputFolder
	$(CC) $(FILES) $(OPTS) $(OUTOPTS) $(OUT)

execute:
	./$(OUT)

docker-run:
	docker run -v $(shell pwd):/opt/project -w /opt/project gcc make run
docker-golden-master:
	docker run -v $(shell pwd):/opt/project -w /opt/project gcc make golden-master
docker-windows-run:
	docker run -v %cd%:/opt/project -w /opt/project gcc make run

clean:
	rm -rf out/

define HELP
# Local commands
	- make run\t\tRun Trivia game
	- make golden-master\tRun locally using Python3 the golden master generation and validation
# Docker commands
	- make docker-run\t\tRun inside docker with Python3
	- make docker-golden-master\tRun inside docker using Python3 the golden master generation and validation
 Please execute "make <command>". Example make help

endef

export HELP