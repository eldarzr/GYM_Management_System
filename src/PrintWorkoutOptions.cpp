//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"
#include "../include/Workout.h"

PrintWorkoutOptions::PrintWorkoutOptions():BaseAction(){}
PrintWorkoutOptions::~PrintWorkoutOptions() {};
PrintWorkoutOptions::PrintWorkoutOptions(const PrintWorkoutOptions &other):BaseAction(other) {}
BaseAction* PrintWorkoutOptions::clone() {
    return new PrintWorkoutOptions(*this);
}
void PrintWorkoutOptions::act(Studio &studio) {
    std::vector<Workout> workouts = studio.getWorkoutOptions();
    for(int i=0; i<int(workouts.size()); i++)
        std::cout << workouts[i].toString() << std::endl;
    complete();
}

std::string PrintWorkoutOptions::toString() const{return "PrintWorkoutOptions completed";}