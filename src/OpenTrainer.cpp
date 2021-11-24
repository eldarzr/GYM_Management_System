//
// Created by spl211 on 13/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

OpenTrainer::OpenTrainer(int id, std::vector<Customer *> &customersList):BaseAction(), trainerId(id), customers(customersList) {}
OpenTrainer::OpenTrainer(const OpenTrainer& other): BaseAction(other), trainerId(other.trainerId){
    copy(other);
}
//OpenTrainer::OpenTrainer(OpenTrainer&& other): BaseAction(other), trainerId(other.trainerId){
//    copy(other);
//    other.clear();
//}
OpenTrainer::~OpenTrainer(){clear();}

void OpenTrainer::clear(){
    for(int i=0; i<(int)customers.size(); i++)
        if(customers[i] != nullptr)
            delete customers[i];
    customers.clear();
}

BaseAction* OpenTrainer::clone() {
    return new OpenTrainer(*this);
}

//OpenTrainer& OpenTrainer::operator=(const OpenTrainer& other){
//    if(this != &other) {
//        clear();
//        copy(other);
//        BaseAction::operator=(other);
//    }
//    return *this;
//}
//OpenTrainer& OpenTrainer::operator=(OpenTrainer&& other){
//    if(this != &other) {
//        clear();
//        copy(other);
//        BaseAction::operator=(other);
//        other.clear();
//    }
//
//    return *this;
//}

void OpenTrainer::copy(const OpenTrainer& other) {
    for(int i=0; i<other.customers.size(); i++)
        customers.push_back(other.customers[i]->clone());
}

void OpenTrainer::act(Studio &studio){
    Trainer* trainer = studio.getTrainer(trainerId);
    if(trainer == nullptr || trainer->isOpen()) {
        this->error("Workout session does not exist or is already open");
        std::cout << getErrorMsg() << std::endl;
        for(int i=0; i<customers.size(); i++) {
            customerNameError +=  " " + customers[i]->toString();
            delete customers[i];
        }
        customers.clear();
    }
    else{
        for(int i=0; i<customers.size(); i++) {
            customerNameError +=  " " + customers[i]->toString();
            trainer->addCustomer(customers[i]->clone());
        }
        trainer->openTrainer();
        this->complete();
    }
}
std::string OpenTrainer::toString() const{
    std::string ret("open " + std::to_string(trainerId));
    ret = ret + customerNameError + " ";
    if(getStatus() == ERROR){
        ret = ret + "Error: " + getErrorMsg();
    }
    else ret = ret + "completed";
    return ret;
}
