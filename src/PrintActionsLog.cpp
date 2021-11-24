//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

PrintActionsLog::PrintActionsLog():BaseAction(){}
PrintActionsLog::~PrintActionsLog() {};
PrintActionsLog::PrintActionsLog(const PrintActionsLog &other):BaseAction(other) {}
BaseAction* PrintActionsLog::clone() {
    return new PrintActionsLog(*this);
}
void PrintActionsLog::act(Studio &studio) {
    std::vector<BaseAction*> actionLog = studio.getActionsLog();
    for(int i=0; i<int(actionLog.size()); i++) {
        std::cout << actionLog[i]->toString() << std::endl;
    }
    complete();
}

std::string PrintActionsLog::toString() const{return "PrintActionsLog Completed";}