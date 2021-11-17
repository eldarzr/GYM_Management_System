//
// Created by spl211 on 17/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

MoveCustomer::MoveCustomer(int src, int dst, int customerId):BaseAction(),srcTrainer(src),dstTrainer(dst),id(customerId){}
BaseAction* MoveCustomer::clone() {
    return new MoveCustomer(*this);
}
void MoveCustomer::act(Studio &studio){
    Trainer* sourceTrainer = studio.getTrainer(srcTrainer);
    Trainer* destinationTrainer = studio.getTrainer(dstTrainer);
    if (sourceTrainer == nullptr || destinationTrainer == nullptr)
        this->error("Cannot move customer");
    else if( !sourceTrainer->isOpen() || !sourceTrainer->isOpen() || isCustomerExists(studio)|| destinationTrainer->getCapacity() == destinationTrainer->getCustomers().size())

        this->error("Cannot move customer");
    else{
        Customer* cus = sourceTrainer->getCustomer(id);
        std::vector<int> calc = cus->order(studio.getWorkoutOptions());
        std::vector<Workout> allWo = studio.getWorkoutOptions();
        int cusPrice = 0;
        for(int i=0;i<calc.size();i++){
            cusPrice = cusPrice + allWo[calc[i]].getPrice();
        }

        sourceTrainer->removeCustomer(id);
        sourceTrainer->setSalary(sourceTrainer->getSalary() - cusPrice);
        destinationTrainer->addCustomer(cus);
        destinationTrainer->setSalary(destinationTrainer->getSalary() + cusPrice);

        if(sourceTrainer->getCustomers().size()==0) {
            sourceTrainer->closeTrainer();
        }

    }

}

bool MoveCustomer::isCustomerExists(Studio &std){
  std::vector<Customer*>&  customersList = std.getTrainer(id)->getCustomers();
    for(int i=0; i<customersList.size(); i++){
        if(customersList[i]->getId() == id)
            return true;
    }
    return false;
}

std::string MoveCustomer::toString() const{ return "MoveCustomer toString not implemented yet";}