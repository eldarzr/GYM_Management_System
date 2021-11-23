//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

RestoreStudio::RestoreStudio():BaseAction(){}
BaseAction* RestoreStudio::clone() {
    return new RestoreStudio(*this);
}
void RestoreStudio::act(Studio &studio) {}

std::string RestoreStudio::toString() const {}