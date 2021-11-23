//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

BackupStudio::BackupStudio():BaseAction(){}
BaseAction* BackupStudio::clone() {
    return new BackupStudio(*this);
}
void BackupStudio::act(Studio &studio) {

}

std::string BackupStudio::toString() const {}