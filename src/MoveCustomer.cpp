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
    else if( !sourceTrainer->isOpen() || !sourceTrainer->isOpen() || !isCustomerExists(studio)
    || destinationTrainer->getCapacity() == destinationTrainer->getCustomers().size())
        this->error("Cannot move customer");
    else{
        //create new customer
        Customer* customer = sourceTrainer->getCustomer(id);
        std::vector<Workout> allWorkoutOptions = studio.getWorkoutOptions();
        Customer* newCustomer = customer->clone();
        std::vector<int> customerWorkoutId = newCustomer->order(studio.getWorkoutOptions());
        //remove old customer from src
        sourceTrainer->removeCustomer(id);
        //add new customer to des
        destinationTrainer->addCustomer(newCustomer);
        destinationTrainer->order(id,customerWorkoutId,allWorkoutOptions);
        if(sourceTrainer->getCustomers().size()==0) {
            sourceTrainer->closeTrainer();
        }

    }

}

bool MoveCustomer::isCustomerExists(Studio &std){
  std::vector<Customer*>&  customersList = std.getTrainer(srcTrainer)->getCustomers();
    for(int i=0; i<customersList.size(); i++){
        if(customersList[i]->getId() == id)
            return true;
    }
    return false;
}

std::string MoveCustomer::toString() const{ return "MoveCustomer toString not implemented yet";}