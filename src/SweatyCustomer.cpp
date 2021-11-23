//
// Created by spl211 on 10/11/2021.
//

#include "../include/Customer.h"
SweatyCustomer::SweatyCustomer(std::string name, int id): Customer(name,id){}
SweatyCustomer::SweatyCustomer(const SweatyCustomer& other): Customer(other.getName(), other.getId()){}
SweatyCustomer::~SweatyCustomer(){}

Customer* SweatyCustomer::clone() {return new SweatyCustomer(*this);}


std::vector<int> SweatyCustomer::order(const std::vector<Workout> &workout_options){
    std::vector<int>plan;
    for(int i=0; i<int(workout_options.size()); i++) {
        if (workout_options[i].getType() == CARDIO)
            plan.push_back(workout_options[i].getId());
    }
    return plan;
}
std::string SweatyCustomer::toString() const{
    return getName() + ",swt";
}

