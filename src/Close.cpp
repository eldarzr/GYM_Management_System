//
// Created by spl211 on 22/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

Close::Close(int id):BaseAction(),trainerId(id){}
BaseAction* Close::clone() {
    return new Close(*this);
}
void Close::act(Studio &studio){
    Trainer* trainerToClose= studio.getTrainer(trainerId);
    if(trainerToClose == nullptr || !trainerToClose->isOpen()){
        this->error("Trainer does not exist or is not open");
        std::cout << getErrorMsg() << std::endl;
    }
    else {
        int trainerSalary = trainerToClose->getSalary();
        trainerToClose->closeTrainer();
        complete();
        std::cout << "Trainer " << trainerId << " closed." <<trainerSalary <<"NIS";

    }

}
std::string Close::toString() const{

    std::string s = "Close " + trainerId;
    if (getStatus() == ERROR){
        s=s+"Error: "+getErrorMsg();
    }
    else s=s+"Completed";

    return s;}
