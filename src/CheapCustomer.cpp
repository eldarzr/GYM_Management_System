//
// Created by spl211 on 10/11/2021.
//

#include "../include/Customer.h"

CheapCustomer::CheapCustomer(std::string name, int id): Customer(name,id){}
CheapCustomer::CheapCustomer(const CheapCustomer& other): Customer(other.getName(), other.getId()){}
CheapCustomer::~CheapCustomer(){}
Customer* CheapCustomer::clone() {return new CheapCustomer(*this);}

std::vector<int> CheapCustomer::order(const std::vector<Workout> &workout_options){
    std::vector<int>plan;
    if(workout_options.size() == 0)
        return plan;
    int id_plan = getCheapestWorkout(workout_options);
    plan.push_back(id_plan);
    return plan;
}

int CheapCustomer::getCheapestWorkout(const std::vector<Workout> &workout_options) {
    int id_plan(0);
    for(int i=0; i<int(workout_options.size()); i++) {
        if (workout_options[i].getPrice() < workout_options[id_plan].getPrice())
            id_plan = i;
    }
    return id_plan;
}

std::string CheapCustomer::toString() const{
    return getName() + ",chp";
}





