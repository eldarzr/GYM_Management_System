//
// Created by spl211 on 16/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

    Order::Order(int id):BaseAction(), trainerId(id){}
    Order::~Order() {};
    Order::Order(const Order &other):BaseAction(other) ,trainerId(other.trainerId){}
    BaseAction* Order::clone() {
        return new Order(*this);
    }
    void Order::act(Studio &studio){
        Trainer* trainer = studio.getTrainer(trainerId);
        if(trainer == nullptr || !(trainer->isOpen())) {
            this->error("Trainer does not exist or is not open");
            std::cout << getErrorMsg() << std::endl;
            return;
        }

        std::vector<Customer*>& _allCustomers = trainer->getCustomers();
        std::vector<Workout>& _allWorkout =studio.getWorkoutOptions();
        for(int i=0;i<int(_allCustomers.size());i++){
            std::vector<int> cusPlan=_allCustomers[i]->order(_allWorkout);
            trainer->order(_allCustomers[i]->getId(),cusPlan,_allWorkout);
            for(int j=0;j<int(cusPlan.size());j++){
                std::cout << _allCustomers[i]->getName()<<" Is Doing "<<_allWorkout[cusPlan[j]].getName()<<std::endl;
            }
        }
        complete();

}
    std::string Order::toString() const{
        std::string ret("order " + std::to_string(trainerId) + " ");
        if(getStatus() == ERROR){
            ret = ret + "Error: " + getErrorMsg();
        }
        else ret = ret + "completed";
        return ret;
}