//
// Created by spl211 on 16/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

    Order::Order(int id):BaseAction(), trainerId(id){}
    BaseAction* Order::clone() {
        return new Order(*this);
    }
    void Order::act(Studio &studio){
        Trainer* trainer = studio.getTrainer(trainerId);
        if(trainer == nullptr || !(trainer->isOpen())) {
            this->error("Trainer does not exist or is not open");
            return;
        }

        std::vector<Customer*>& _allCustomers = trainer->getCustomers();
        std::vector<Workout>& _allWorkout =studio.getWorkoutOptions();
        for(int i=0;_allCustomers.size();i++){
            std::vector<int> cusPlan=_allCustomers[i]->order(_allWorkout);
            for(int j=0;j<cusPlan.size();j++){
                std::cout << _allCustomers[i]->getName()<<" Is Doing "<<_allWorkout[cusPlan[j]].getName()<<std::endl;
            }
        }
        complete();

}
    std::string Order::toString() const{ return "CPP METUMTAM";}



