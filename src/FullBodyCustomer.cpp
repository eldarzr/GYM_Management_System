//
// Created by spl211 on 17/11/2021.
//

#include "../include/Customer.h"
FullBodyCustomer::FullBodyCustomer(std::string name, int id) : Customer(name,id) {}
FullBodyCustomer::FullBodyCustomer(const FullBodyCustomer &other) : Customer(other.getName(),other.getId()){}
FullBodyCustomer::~FullBodyCustomer() {}
Customer* FullBodyCustomer::clone() {return new FullBodyCustomer(*this);}

std::vector<int> FullBodyCustomer::order(const std::vector<Workout> &workout_options){

    std::vector<int> plan;

    int id_plan(0);
    for(int i=0; i<workout_options.size(); i++) {
        if (workout_options[i].getType()==CARDIO && workout_options[i].getPrice() < workout_options[id_plan].getPrice())
            id_plan = i;
    }
    plan.push_back(id_plan);
    id_plan=0;
    for(int i=0; i<workout_options.size(); i++) {
        if (workout_options[i].getType()==MIXED && workout_options[i].getPrice() > workout_options[id_plan].getPrice())
            id_plan = i;
    }
    plan.push_back(id_plan);
    id_plan=0;
    for(int i=0; i<workout_options.size(); i++) {
        if (workout_options[i].getType()==ANAEROBIC && workout_options[i].getPrice() < workout_options[id_plan].getPrice())
            id_plan = i;
    }
    plan.push_back(id_plan);

    return plan;
}
std::string FullBodyCustomer::toString() const{
    return getName() + ",fbd";
}
