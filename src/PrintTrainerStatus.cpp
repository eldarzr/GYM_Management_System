//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

PrintTrainerStatus::PrintTrainerStatus(int id):BaseAction(),trainerId(id){}
BaseAction* PrintTrainerStatus::clone() {
    return new PrintTrainerStatus(*this);
}
void PrintTrainerStatus::act(Studio &studio) {
    Trainer* trainer = studio.getTrainer(trainerId);
    std::vector<Customer*> customers = trainer->getCustomers();
    std::vector<OrderPair> orders = trainer->getOrders();

    std::cout<<"Trainer " << trainerId << " status: ";
    if(trainer->isOpen())
        std::cout << "open"<<std::endl;
    else
        std::cout << "close"<<std::endl;
    std::cout << "Customers:" << std::endl;
    for(int i=0; i< customers.size(); i++)
        std::cout << customers[i]->getId() << " " << customers[i]->getName() << std::endl;

    std::cout << "Orders:" << std::endl;
    for(int i=0; i< orders.size(); i++)
        std::cout << orders[i].second.getName() << " " << orders[i].second.getPrice() << " " << orders[i].first << " "  << std::endl;
    std::cout << "Current Trainer’s Salary: " << trainer->getSalary() << "NIS" << std::endl;
}

std::string PrintTrainerStatus::toString() const{
    return "open trainer action does not have yes tostring";
}