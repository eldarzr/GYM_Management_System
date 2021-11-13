//
// Created by spl211 on 10/11/2021.
//

#include "../include/Trainer.h"

Trainer::Trainer(int t_capacity): capacity(t_capacity), open(false) {}
Trainer::Trainer(const Trainer& other):capacity(other.capacity), open(other.open){
    copy(other);
}

void Trainer::clear() {
    for(int i=0; i<customersList.size(); i++){
        delete customersList[i];
    }
    customersList.clear();
    orderList.clear();
}
void Trainer::copy(const Trainer& other) {
    for(int i=0; i<customersList.size(); i++){
        customersList.push_back(other.customersList[i]->clone());
    }
    for(int i=0; i<orderList.size(); i++){
        orderList.push_back(other.orderList[i]);
    }
}
Trainer& Trainer::operator=(const Trainer& other){
    if(&other == this)
        return *this;
    clear();
    capacity = other.capacity;
    open = other.open;
    copy(other);
    return *this;
}

Trainer::~Trainer(){
    clear();
}
//Trainer(const Trainer&& other){}
//Trainer& operator=(const Trainer&& other);

int Trainer::getCapacity() const {return capacity;}
void Trainer::addCustomer(Customer* customer) {
    customersList.push_back(customer);
}
void Trainer::removeCustomer(int id) {
    Customer* c = customersList[id];
    customersList.erase(customersList.begin()+ id);
    delete c;
}
Customer* Trainer::getCustomer(int id) {
    return customersList[id];
}
std::vector<Customer*>& Trainer::getCustomers() {
    return customersList;
}

void Trainer::order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout>& workout_options){
    for(int i=0; i<workout_ids.size(); i++)
        orderList.push_back(OrderPair(customer_id, workout_options[workout_ids[i]]));
}

bool Trainer::isCustomerExist(int id){
    for(int i=0; i<customersList.size(); i++){
        if(customersList[i]->getId() == id)
            return true;
    }
    return false;
}

bool Trainer::isOpen(){return open;}
void Trainer::openTrainer() {open = true;}