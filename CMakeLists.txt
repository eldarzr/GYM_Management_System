cmake_minimum_required(VERSION 3.20)
project(SPL_HW1)

set(CMAKE_CXX_STANDARD 14)

add_executable(SPL_HW1 src/main.cpp include/Workout.h src/Workout.cpp include/Trainer.h include/Studio.h include/Customer.h include/Action.h src/Customer.cpp src/SweatyCustomer.cpp src/CheapCustomer.cpp src/Trainer.cpp src/BaseAction.cpp src/OpenTrainer.cpp src/Studio.cpp src/Order.cpp src/HeavyMuscleCustomer.cpp src/FullBodyCustomer.cpp src/MoveCustomer.cpp src/PrintTrainerStatus.cpp)
