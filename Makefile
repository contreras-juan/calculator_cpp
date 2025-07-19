CXX = g++-15
CXXFLAGS = -std=c++17 -Wall -Iinclude
SOURCES = src/*.cpp main.cpp
TARGET = bin/calculator

build:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -f $(TARGET)
