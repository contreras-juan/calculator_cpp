build:
	g++-15 src/*.cpp main.cpp -o calculator

run:
	./calculator

remove:
	rm ./calculator