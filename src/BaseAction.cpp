//
// Created by spl211 on 13/11/2021.
//

#include "../include/Action.h"


BaseAction::BaseAction(){}
ActionStatus BaseAction::getStatus() const{return status;}
void BaseAction::complete(){ status=COMPLETED;}
void BaseAction::error(std::string errorMsg){
    this->errorMsg=errorMsg;
    status = ERROR;
}
std::string BaseAction::getErrorMsg() const{return errorMsg;}
