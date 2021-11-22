//
// Created by spl211 on 22/11/2021.
//

#include "../include/Action.h"
#include "../include/Studio.h"

CloseAll::CloseAll():BaseAction(){isAct=false;}
BaseAction* CloseAll::clone() {
    return new CloseAll();
}
void CloseAll::act(Studio &studio){
     int trainerAmount = studio.getNumOfTrainers();
    for (int trainerId=0; trainerId<trainerAmount ;trainerId++) {
        Trainer *trainerToClose = studio.getTrainer(trainerId);
        if (!(trainerToClose == nullptr || !trainerToClose->isOpen())) {
            int trainerSalary = trainerToClose->getSalary();
            trainerToClose->closeTrainer();
            complete();
            isAct=true;
            std::cout << "Trainer " << trainerId << " closed. Salary " <<trainerSalary <<"NIS"<<"\n";
        }
    }

}
std::string CloseAll::toString() const{
    if (!isAct)
        return "";
    return "CloseALl";}
