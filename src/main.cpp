#include "../include/Studio.h"
#include "../include/Workout.h"
#include "../include/Customer.h"
#include "../include/Trainer.h"
#include <iostream>

using namespace std;

//Studio* backup = nullptr;

Workout* w;
std::vector<Workout> workouts;

void testTrainer();

int main(int argc, char** argv){

    Studio s;
    s.start();


/*
    workouts.push_back(Workout(0,"Yoga",90,ANAEROBIC));
    workouts.push_back(Workout(1,"Pilates",110,ANAEROBIC));
    workouts.push_back(Workout(2,"Spinning",120,MIXED));
    workouts.push_back(Workout(3,"Zumba",100,CARDIO));
    workouts.push_back(Workout(4,"Rope Jumps",70,CARDIO));
    workouts.push_back(Workout(5,"CrossFit",140,MIXED));
    Trainer* t1 = new Trainer(4);
    Customer* c1 = new SweatyCustomer("dani", 0);
    Customer* c2 = new SweatyCustomer("shlom", 1);
    Customer* c3 = new SweatyCustomer("avi", 2);
    t1->addCustomer(c1);
    t1->addCustomer(c2);
    t1->addCustomer(c3);
    testTrainer();*/

//    Customer* swt = new SweatyCustomer("shalom", 1);
//    CheapCustomer chp("david", 2);
//    cout<<swt->toString()<<endl;
//    vector<int> wp = swt->order(workouts);
//    for(int i=0; i<wp.size(); i++)
//        cout<<workouts[wp[i]].getName()<<endl;
//    cout<<workouts[chp.order(workouts)[0]].getName()<< endl;
//    delete swt;
/*    if(argc!=2){
        std::cout << "usage: studio <config_path>" << std::endl;
        return 0;
    }
    string configurationFile = argv[1];
    Studio studio(configurationFile);
    studio.start();
    if(backup!=nullptr){
        delete backup;
        backup = nullptr;
    }*/
    return 0;
}

