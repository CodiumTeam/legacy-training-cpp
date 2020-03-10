default: build run

build:
	@g++ -lcurl -std=c++11 -Wall -Werror -O src/*.cpp -O src/domain/*.cpp -O src/framework/*.cpp -O src/libraries/*.cpp -o bin/user_registration

.PHONY: run
run:
	@./bin/user_registration

tests:
	g++ -lcppunit -lcurl -std=c++11 -Wall -Werror -O src/domain/*.cpp -O src/framework/*.cpp -O src/libraries/*.cpp test/*.cpp -o bin/run_tests
	./bin/run_tests

docker-build:
	docker build -t cpp-docker-bootstrap .
docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project cpp-docker-bootstrap make
docker-tests:
	docker run -v ${PWD}:/opt/project -w /opt/project cpp-docker-bootstrap make tests
win-docker-run:
	docker run -v %cd%:/opt/project -w /opt/project cpp-docker-bootstrap make
win-docker-tests:
	docker run -v %cd%:/opt/project -w /opt/project cpp-docker-bootstrap make tests