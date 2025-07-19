CXX = g++-15
CXXFLAGS = -std=c++17 -Wall -Iinclude
SOURCES = $(wildcard src/*.cpp)
MAIN = main.cpp
TARGET = bin/calculator

build:
	$(CXX) $(CXXFLAGS) $(SOURCES) $(MAIN) -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -f $(TARGET)