//#include "Studio.h"
#include "../include/Workout.h"
#include <iostream>

using namespace std;

//Studio* backup = nullptr;

Workout* w;
int main(int argc, char** argv){

    Workout* w =new Workout(3,"a",3,MIXED);


    cout<<w->getType()<<endl;
    delete w;
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