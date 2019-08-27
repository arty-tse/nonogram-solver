CXX = g++
CXXFLAGS = -Wall -Werror -g -std=c++11

SRC = main.cpp puzzle.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -rf $(OBJ) $(EXEC)