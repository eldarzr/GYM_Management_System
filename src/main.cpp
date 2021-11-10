//#include "Studio.h"
#include "../include/Workout.h"
#include "../include/Customer.h"
#include <iostream>

using namespace std;

//Studio* backup = nullptr;

Workout* w;
int main(int argc, char** argv){

    std::vector<Workout> workouts;
    workouts.push_back(Workout(0,"Yoga",90,ANAEROBIC));
    workouts.push_back(Workout(1,"Pilates",110,ANAEROBIC));
    workouts.push_back(Workout(2,"Spinning",120,MIXED));
    workouts.push_back(Workout(3,"Zumba",100,CARDIO));
    workouts.push_back(Workout(4,"Rope Jumps",70,CARDIO));
    workouts.push_back(Workout(5,"CrossFit",140,MIXED));

    Customer* swt = new SweatyCustomer("shalom", 1);
    cout<<swt->toString()<<endl;
    vector<int> wp = swt->order(workouts);
    for(int i=0; i<wp.size(); i++)
        cout<<workouts[wp[i]].getName()<<endl;
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