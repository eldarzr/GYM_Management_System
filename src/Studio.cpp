//
// Created by spl211 on 13/11/2021.
//

#include "../include/Studio.h"

Studio::Studio(){}
Studio::Studio(const std::string &configFilePath){}
void Studio::start(){}
int Studio::getNumOfTrainers() const{}
Trainer* Studio::getTrainer(int tid){}
const std::vector<BaseAction*>& Studio::getActionsLog() const{} // Return a reference to the history of actions
std::vector<Workout>& Studio::getWorkoutOptions(){}

