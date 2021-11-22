//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

PrintActionsLog::PrintActionsLog():BaseAction(){}
BaseAction* PrintActionsLog::clone() {
    return new PrintActionsLog(*this);
}
void PrintActionsLog::act(Studio &studio) {
    std::vector<BaseAction*> actionLog = studio.getActionsLog();
    for(int i=0; i<actionLog.size(); i++)
        std::cout << actionLog[i]->toString() << std::endl;
    complete();
}

std::string PrintActionsLog::toString() const{
    return "PrintActionsLog does not have yes tostring";
}