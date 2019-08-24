CXX = g++
CXXFLAGS = -Wall -g

app: app.o puzzle.o
	$(CXX) $(CXXFLAGS) -o app app.o puzzle.o

app.o: app.cpp puzzle.h
	$(CXX) $(CXXFLAGS) -c app.cpp

puzzle.o: puzzle.h
