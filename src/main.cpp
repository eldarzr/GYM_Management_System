#include "../include/Studio.h"
#include <iostream>

using namespace std;

Studio* backup = nullptr;

int main(int argc, char** argv){
    if(argc!=2){
        std::cout << "usage: studio <config_path>" << std::endl;
        return 0;
    }
    string configurationFile = argv[1];
    Studio studio(configurationFile);
    studio.start();
    if(backup!=nullptr){
        delete backup;
        backup = nullptr;
    }
    return 0;
}



/*
#include "../include/Studio.h"
#include <iostream>

using namespace std;

Studio* backup;

Workout* w;
std::vector<Workout> workouts;

void testTrainer();

int main(int argc, char** argv){

    backup = nullptr;
    Studio s;
    s.start();


    if(backup!=nullptr) {
        delete backup;
        backup = nullptr;
    }

    return 0;
}
*/

