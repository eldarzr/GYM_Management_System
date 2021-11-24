//
// Created by spl211 on 17/11/2021.
//

#include <algorithm>
#include "../include/Customer.h"
HeavyMuscleCustomer::HeavyMuscleCustomer(std::string name, int id) : Customer(name,id) {}
HeavyMuscleCustomer::HeavyMuscleCustomer(const HeavyMuscleCustomer &other) : Customer(other.getName(),other.getId()){}
HeavyMuscleCustomer::~HeavyMuscleCustomer() {}
Customer* HeavyMuscleCustomer::clone() {return new HeavyMuscleCustomer(*this);}

std::vector<int> HeavyMuscleCustomer::order(const std::vector<Workout> &workout_options) {
    std::vector<int> plan;
    std::vector<std::pair<int,int>> woPairs;

    for(int i=0;i<int(workout_options.size());i++) {
        if (workout_options[i].getType() == ANAEROBIC) {
            woPairs.push_back(std::make_pair(workout_options[i].getPrice(), workout_options[i].getId()));
        }
    }
    sort(woPairs.rbegin(),woPairs.rend());
    for(int i=0; i<int(woPairs.size()); i++)
    {
        plan.push_back(woPairs[i].second);
    }
    return plan;
}

std::string HeavyMuscleCustomer::toString() const{
    return getName() + ",mcl";
}