CC=g++
FLAGS=-std=c++11

all: run

run: main.o
	$(CC) $(FLAGS) main.o -o run

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp
	
clean:
	rm -rf *.o
	rm -rf run
	
	
