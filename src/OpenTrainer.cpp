//
// Created by spl211 on 13/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

//OpenTrainer::OpenTrainer(int id, std::vector<Customer *> &customersList):BaseAction(), trainerId(id), customers(customersList) {}
void OpenTrainer::act(Studio &studio){
    Trainer* t = studio.getTrainer(trainerId);
    if(t == nullptr || t->isOpen())
        this->error("Workout session does not exist or is already open");
    else{
        for(int i=0; i<customers.size(); i++) {
            t->addCustomer(customers[i]);
            t->order(customers[i]->getId(),customers[i]->order(studio.getWorkoutOptions()),studio.getWorkoutOptions());
        }
        t->openTrainer();
        this->complete();
    }
}
std::string OpenTrainer::toString() const{
    return "open trainer action does not have yes tostring";
}
