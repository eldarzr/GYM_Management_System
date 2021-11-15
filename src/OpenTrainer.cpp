//
// Created by spl211 on 13/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

OpenTrainer::OpenTrainer(int id, std::vector<Customer *> &customersList):BaseAction(), trainerId(id), customers(customersList) {}
OpenTrainer::OpenTrainer(const OpenTrainer& other): BaseAction(other), trainerId(other.trainerId){
    copy(other);
}
OpenTrainer::OpenTrainer(OpenTrainer&& other): BaseAction(other), trainerId(other.trainerId){
    copy(other);
    other.clear();
}
OpenTrainer::~OpenTrainer(){}
void OpenTrainer::clear(){
    customers.clear();
    BaseAction::clear();
}

BaseAction* OpenTrainer::clone() {
    return new OpenTrainer(*this);
}

void OpenTrainer::operator=(const OpenTrainer& other){
    clear();
    copy(other);
    BaseAction::operator=(other);
}
void OpenTrainer::operator=(const OpenTrainer&& other){
    clear();
    copy(other);
    BaseAction::operator=(other);
    clear();
}

void OpenTrainer::copy(const OpenTrainer& other) {
    for(int i=0; i<other.customers.size(); i++)
        customers.push_back(other.customers[i]->clone());
}

void OpenTrainer::act(Studio &studio){
    Trainer* trainer = studio.getTrainer(trainerId);
    if(trainer == nullptr || trainer->isOpen())
        this->error("Workout session does not exist or is already open");
    else{
        for(int i=0; i<customers.size(); i++) {
            trainer->addCustomer(customers[i]);
            trainer->order(customers[i]->getId(),customers[i]->order(studio.getWorkoutOptions()),studio.getWorkoutOptions());
        }
        trainer->openTrainer();
        this->complete();
    }
}
std::string OpenTrainer::toString() const{
    return "open trainer action does not have yes tostring";
}
