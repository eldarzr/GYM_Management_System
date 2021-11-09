
all: clean compile link

link:
	g++ -o bin/studio bin/main.o bin/Workout.o

compile:
	g++ -g -Wall -Weffc++ -c -o bin/main.o src/main.cpp
	g++ -g -Wall -Weffc++ -c -o bin/Workout.o src/Workout.cpp

clean:
	rm -f bin/*
