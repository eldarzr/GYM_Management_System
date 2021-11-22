//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

PrintWorkoutOptions::PrintWorkoutOptions():BaseAction(){}
BaseAction* PrintWorkoutOptions::clone() {
    return new PrintWorkoutOptions(*this);
}
void PrintWorkoutOptions::act(Studio &studio) {
    std::vector<Workout> workouts = studio.getWorkoutOptions();
    for(int i=0; i<workouts.size(); i++)
        std::cout << workouts[i].toString() << std::endl;
        //std::cout << workouts[i].getName() << ", " << workouts[i].getType() << ", "<< workouts[i].getPrice() << ", " << std::endl;
    complete();
}

std::string PrintWorkoutOptions::toString() const{
    return "PrintWorkoutOptions completed";
}