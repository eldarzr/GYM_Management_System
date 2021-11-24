//
// Created by spl211 on 19/11/2021.
//
#include "../include/Action.h"
#include "../include/Studio.h"

PrintTrainerStatus::PrintTrainerStatus(int id):BaseAction(),trainerId(id){}
PrintTrainerStatus::~PrintTrainerStatus() {};
PrintTrainerStatus::PrintTrainerStatus(const PrintTrainerStatus &other):BaseAction(other),trainerId(other.trainerId) {}
BaseAction* PrintTrainerStatus::clone() {
    return new PrintTrainerStatus(*this);
}
void PrintTrainerStatus::act(Studio &studio) {
    Trainer* trainer = studio.getTrainer(trainerId);
    if(trainer == nullptr || !trainer->isOpen()){
        return;
    }
    std::vector<Customer*> customers = trainer->getCustomers();
    std::vector<OrderPair> orders = trainer->getOrders();
    std::cout<<"Trainer " << trainerId << " status: ";
    if(!trainer->isOpen())
        std::cout << "closed"<<std::endl;
    else {
        std::cout << "open" << std::endl;
        std::cout << "Customers:" << std::endl;
        for (int i = 0; i < int(customers.size()); i++)
            std::cout << customers[i]->getId() << " " << customers[i]->getName() << std::endl;

        std::cout << "Orders:" << std::endl;
        for (int i = 0; i < int(orders.size()); i++)
            std::cout << orders[i].second.getName() << " " << orders[i].second.getPrice() << " " << orders[i].first
                      << " " << std::endl;
        std::cout << "Current Trainer’s Salary: " << trainer->getSalary() << "NIS" << std::endl;
    }
    complete();
}

std::string PrintTrainerStatus::toString() const {
    std::string ret = "PrintTrainerStatus " + std::to_string(trainerId) + " ";
    return ret;
}