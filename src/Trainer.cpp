//
// Created by spl211 on 10/11/2021.
//

#include "../include/Trainer.h"

Trainer::Trainer(int t_capacity): capacity(t_capacity), open(false) ,salary(0){}
Trainer::Trainer(const Trainer& other):capacity(other.capacity), open(other.open),salary(other.salary){
    copy(other);
}

void Trainer::clear() {
    for(int i=0; i<int(customersList.size()); i++){
        delete customersList[i];
    }
    customersList.clear();
    orderList.clear();
}
void Trainer::copy(const Trainer& other) {
    for(int i=0; i<int(other.customersList.size()); i++){
        customersList.push_back(other.customersList[i]->clone());
    }
    for(int i=0; i<int(other.orderList.size()); i++){
        orderList.push_back(other.orderList[i]);
    }
}
Trainer& Trainer::operator=(const Trainer& other){
    if(&other != this) {
        clear();
        capacity = other.capacity;
        open = other.open;
        salary = other.salary;
        copy(other);
    }
    return *this;
}

Trainer::~Trainer(){
    clear();
}

Trainer::Trainer(Trainer&& other):capacity(other.capacity), open(other.open), salary(other.salary){
    if(this != &other) {
        copy(other);
        other.clear();
    }
}
Trainer& Trainer::operator=(Trainer&& other){
    if(&other != this) {
        clear();
        capacity = other.capacity;
        salary = other.salary;
        open = other.open;
        copy(other);
    }
    return *this;
}

int Trainer::getCapacity() const {return capacity;}
void Trainer::addCustomer(Customer* customer) {
    if(capacity > int(customersList.size()))
        customersList.push_back(customer);
}
void Trainer::removeCustomer(int id) {
    Customer* c = getCustomer(id);
    if(c != nullptr) {
        eraseOrderList(id);
        for (int i = 0; i < int(customersList.size()); i++)
            if (customersList[i]->getId() == id)
                customersList.erase(customersList.begin() + i);
        delete c;
    }
}
void Trainer::eraseOrderList(int id){
    std::vector<OrderPair> orderList_copy;
    for(int i=0; i<int(orderList.size()); i++){
        if(orderList[i].first != id)
            orderList_copy.push_back(orderList[i]);
        else salary-= orderList[i].second.getPrice();
    }
    orderList.clear();
    for(int i=0; i<int(orderList_copy.size()); i++){
        orderList.push_back(orderList_copy[i]);
    }
}
Customer* Trainer::getCustomer(int id) {
    for(int i=0; i<int(customersList.size()); i++)
        if(customersList[i]->getId() == id)
            return customersList[i];
    return nullptr;
}
std::vector<Customer*>& Trainer::getCustomers() {return customersList;}

void Trainer::setSalary(int salary) {Trainer::salary = salary;}
int Trainer::getSalary() {return salary;}

std::vector<OrderPair>& Trainer::getOrders(){return orderList;}

void Trainer::order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout>& workout_options){
    for(int i=0; i<int(workout_ids.size()); i++) {
        orderList.push_back(OrderPair(customer_id, workout_options[workout_ids[i]]));
        salary+= workout_options[workout_ids[i]].getPrice();
    }
}

bool Trainer::isCustomerExist(int id){
    for(int i=0; i<int(customersList.size()); i++){
        if(customersList[i]->getId() == id)
            return true;
    }
    return false;
}

bool Trainer::isOpen(){return open;}
void Trainer::openTrainer() {open = true;}
void Trainer::closeTrainer() {
    open = false;
    clear();
} // close trainer

Trainer* Trainer::clone() {return new Trainer(*this);}
