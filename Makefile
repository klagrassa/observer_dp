CXX=g++
CXXFLAGS=-Wall -std=c++17
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
EXE_DIR = bin
SRC_DIR = src

main : $(OBJ)
	$(CXX) -o $@ $^

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean :
	rm -rf *.o main