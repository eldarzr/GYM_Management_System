//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

extern Studio* backup;

RestoreStudio::RestoreStudio():BaseAction(){}
RestoreStudio::~RestoreStudio() {};
RestoreStudio::RestoreStudio(const RestoreStudio &other):BaseAction(other){}
BaseAction* RestoreStudio::clone() {
    return new RestoreStudio(*this);
}
void RestoreStudio::act(Studio &studio) {
    if(backup == nullptr){
        this->error("No backup available");
        std::cout << getErrorMsg() << std::endl;
    }
    else {
        studio.operator=(*backup);
        complete();
    }
}

std::string RestoreStudio::toString() const {
    if(getStatus() == COMPLETED)
        return "RestoreStudio Completed";
    std::string ret = "RestoreStudio Error: " + getErrorMsg();
    return ret;
}