//
// Created by spl211 on 13/11/2021.
//

#include "../include/Studio.h"

void Studio::start(){
    std::vector<Customer*> c;
    c.push_back(new SweatyCustomer("dani", 0));
    c.push_back(new SweatyCustomer("shalom", 1));
    c.push_back(new HeavyMuscleCustomer("avi", 2));
    c.push_back(new FullBodyCustomer("avraham", 3));
    c.push_back(new CheapCustomer("moyal", 4));

    BaseAction* action = new OpenTrainer(0,c);
    action->act(*this);
    actionsLog.push_back(action);
    action = new Order(0);
    action->act(*this);
    actionsLog.push_back(action);
/*    if(action->getStatus() == COMPLETED)
        std::cout<<"compleated"<<std::endl;
    else
        std::cout<<action->toString()<<std::endl;*/
/*    action = new OpenTrainer(0,trainers[0]->getCustomers());
    action->act(*this);
    actionsLog.push_back(action);
    if(action->getStatus() == COMPLETED)
        std::cout<<"compleated"<<std::endl;
    else
        std::cout<<action->toString()<<std::endl;*/
}

Studio::Studio(){
    workout_options.push_back(Workout(0,"Yoga",90,ANAEROBIC));
    workout_options.push_back(Workout(1,"Pilates",110,ANAEROBIC));
    workout_options.push_back(Workout(2,"Spinning",120,MIXED));
    workout_options.push_back(Workout(3,"Zumba",100,CARDIO));
    workout_options.push_back(Workout(4,"Rope Jumps",70,CARDIO));
    workout_options.push_back(Workout(5,"CrossFit",140,MIXED));
    trainers.push_back(new Trainer(4));

/*    trainers[0]->addCustomer(c1);
    trainers[0]->addCustomer(c2);
    trainers[0]->addCustomer(c3);*/
}


Studio::Studio(const Studio &other){
    copy(other);
}
void Studio::copy(const Studio &other){
    open = other.open;

    for(int i=0; i<other.trainers.size(); i++){
        trainers.push_back(other.trainers[i]->clone());
    }
    for(int i=0; i<other.workout_options.size(); i++){
        workout_options.push_back(other.workout_options[i]);
    }
    for(int i=0; i<other.actionsLog.size(); i++){
        actionsLog.push_back(other.actionsLog[i]->clone());
    }
}
 Studio::~Studio(){
    clear();
}

Studio& Studio::operator =(const Studio &other){
    if(&other != this){
        clear();
        copy(other);
    }
    return *this;
}
Studio::Studio(Studio &&otherStudio){
    copy(otherStudio);
    otherStudio.clear();
    otherStudio.open=false;
}
Studio& Studio::operator = (Studio && other){
    if(this != &other) {
        clear();
        copy(other);
        other.clear();
    }
    return *this;
}

Studio::Studio(const std::string &configFilePath){}
int Studio::getNumOfTrainers() const{ return trainers.size();}
Trainer* Studio::getTrainer(int tid){
    if(tid >= trainers.size() )
        return nullptr;
    return trainers[tid];}
const std::vector<BaseAction*>& Studio::getActionsLog() const{return actionsLog;} // Return a reference to the history of actions
std::vector<Workout>& Studio::getWorkoutOptions(){return workout_options;}

void Studio::clear() {
    for(int i=0;i<trainers.size();i++) {
        delete trainers[i];
    }
    for(int i=0;i<actionsLog.size();i++) {
        delete actionsLog[i];
    }
    trainers.clear();
    actionsLog.clear();
    workout_options.clear();
}

