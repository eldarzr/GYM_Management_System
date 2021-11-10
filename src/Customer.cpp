//
// Created by spl211 on 09/11/2021.
//

#include "../include/Customer.h"

Customer :: Customer(std::string c_name, int c_id) : name(c_name) , id(c_id){}
Customer :: Customer(const Customer& other) : name(other.name) , id(other.id){}
Customer:: ~Customer(){}
std::string Customer::getName() const {return name;}
int Customer::getId() const {return id;}