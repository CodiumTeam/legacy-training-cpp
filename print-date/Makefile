docker-build:
	docker build . -t gcc-googletest

docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project gcc-googletest ./run-once.sh
