build:
	g++-15 src/*.cpp main.cpp -o bin/calculator

run:
	bin/calculator

remove:
	rm ./calculator