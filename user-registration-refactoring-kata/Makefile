default: build run

build:
	@g++ -std=c++11 -Wall -Werror -O src/*.cpp -O src/domain/*.cpp -O src/framework/*.cpp -O src/libraries/*.cpp -o bin/user_registration -lcurl

.PHONY: run
run:
	@./bin/user_registration

tests:
	g++ -lcppunit -std=c++11 -Wall -Werror -O test/*.cpp -o bin/run_tests
	./bin/run_tests
