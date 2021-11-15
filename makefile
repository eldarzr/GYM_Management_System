
all: clean compile link

link:
	g++ -o bin/studio bin/main.o bin/Workout.o bin/Customer.o bin/SweatyCustomer.o bin/CheapCustomer.o bin/Trainer.o bin/BaseAction.o bin/OpenTrainer.o bin/Studio.o

compile:
	g++ -g -Wall -Weffc++ -c -o bin/main.o src/main.cpp
	g++ -g -Wall -Weffc++ -c -o bin/Workout.o src/Workout.cpp
	g++ -g -Wall -Weffc++ -c -o bin/Customer.o src/Customer.cpp
	g++ -g -Wall -Weffc++ -c -o bin/SweatyCustomer.o src/SweatyCustomer.cpp
	g++ -g -Wall -Weffc++ -c -o bin/CheapCustomer.o src/CheapCustomer.cpp
	g++ -g -Wall -Weffc++ -c -o bin/Trainer.o src/Trainer.cpp
	g++ -g -Wall -Weffc++ -c -o bin/BaseAction.o src/BaseAction.cpp
	g++ -g -Wall -Weffc++ -c -o bin/OpenTrainer.o src/OpenTrainer.cpp
	g++ -g -Wall -Weffc++ -c -o bin/Studio.o src/Studio.cpp

clean:
	rm -f bin/*
