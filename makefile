CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

all: calculator

calculator: main.cpp calculator.cpp
	$(CXX) $(CXXFLAGS) -o calculator main.cpp

clean:
	rm -f calculator
