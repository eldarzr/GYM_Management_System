//
// Created by spl211 on 13/11/2021.
//

#include "../include/Action.h"

extern Studio* backup;

BaseAction::BaseAction(){}
BaseAction::BaseAction(const BaseAction& other):errorMsg(other.errorMsg), status(other.status){}
BaseAction* BaseAction::operator=(const BaseAction& other){
    errorMsg = other.errorMsg;
    status = other.status;
}
BaseAction::~BaseAction(){ clear();}
ActionStatus BaseAction::getStatus() const{return status;}
void BaseAction::complete(){ status=COMPLETED;}
void BaseAction::error(std::string errorMsg){
    this->errorMsg=errorMsg;
    status = ERROR;
}
std::string BaseAction::getErrorMsg() const{return errorMsg;}

void BaseAction::clear() {
    errorMsg = "";
}
