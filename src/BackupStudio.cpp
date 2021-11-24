//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

extern Studio* backup;

BackupStudio::BackupStudio():BaseAction(){}
BackupStudio::~BackupStudio() {};
BackupStudio::BackupStudio(const BackupStudio &other):BaseAction(other){}
BaseAction* BackupStudio::clone() {
    return new BackupStudio(*this);
}
void BackupStudio::act(Studio &studio) {
    backup = new Studio(studio);
    complete();
}

std::string BackupStudio::toString() const {
    return "BackupStudio Completed";
}