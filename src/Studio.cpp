//
// Created by spl211 on 13/11/2021.
//

#include "../include/Studio.h"

Studio::Studio(){}
Studio::Studio(const Studio &other){
    copy(other);
}
void Studio::copy(const Studio &other){
    open = other.open;

    for(int i=0; i<other.trainers.size(); i++){
        trainers.push_back(other.trainers[i]->clone());
    }
    for(int i=0; i<other.workout_options.size(); i++){
        workout_options.push_back(other.workout_options[i]);
    }
    for(int i=0; i<other.actionsLog.size(); i++){
        actionsLog.push_back(other.actionsLog[i]->clone());
    }
}
 Studio::~Studio(){
    clear();
}

Studio& Studio::operator =(const Studio &other){
    if(&other != this){
        clear();
        copy(other);
    }
    return *this;
}
Studio::Studio(Studio &&otherStudio){
    copy(otherStudio);
    otherStudio.clear();
    otherStudio.open=false;
}
Studio& Studio::operator = (Studio && other){
    if(this != &other) {
        clear();
        copy(other);
        other.clear();
    }
    return *this;
}

Studio::Studio(const std::string &configFilePath){}
void Studio::start(){}
int Studio::getNumOfTrainers() const{ return trainers.size();}
Trainer* Studio::getTrainer(int tid){
    if(tid >= trainers.size() )
        return nullptr;
    return trainers[tid];}
const std::vector<BaseAction*>& Studio::getActionsLog() const{return actionsLog;} // Return a reference to the history of actions
std::vector<Workout>& Studio::getWorkoutOptions(){return workout_options;}

void Studio::clear() {
    for(int i=0;i<trainers.size();i++) {
        delete trainers[i];
    }
    for(int i=0;i<actionsLog.size();i++) {
        delete actionsLog[i];
    }
    trainers.clear();
    actionsLog.clear();
    workout_options.clear();

}

