//
// Created by spl211 on 13/11/2021.
//

#include "../include/Studio.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Studio::start(){
    int id_customer=0;
    bool flg = true;
    while (flg) {
        std::string input;
        std::getline( std::cin, input);
        if (input.find("open") != std::string::npos) {
            input = input.substr(5);
            std::stringstream ss_space(input);

            std::string sub;
            getline(ss_space, sub, ' ');
            int trainer_num = std::stoi(sub);

            std::vector<Customer *> customers;
            while (ss_space.good()) {
                std::string sub;
                getline(ss_space, sub, ',');
                std::string name = sub;
                getline(ss_space, sub, ' ');
                std::string srg = sub;
                if (sub.find("swt") != std::string::npos)
                    customers.push_back(new SweatyCustomer(name, id_customer));
                if (sub.find("chp") != std::string::npos)
                    customers.push_back(new CheapCustomer(name, id_customer));
                if (sub.find("mcl") != std::string::npos)
                    customers.push_back(new HeavyMuscleCustomer(name, id_customer));
                if (sub.find("fbd") != std::string::npos)
                    customers.push_back(new FullBodyCustomer(name, id_customer));
                id_customer++;
            }
            BaseAction *action = new OpenTrainer(trainer_num, customers);
            action->act(*this);
            actionsLog.push_back(action);
        }
            if (input.find("order") != std::string::npos) {
                input = input.substr(6);
                int trainer_num = std::stoi(input);
                BaseAction* action = new Order(trainer_num);
                action->act(*this);
                actionsLog.push_back(action);
            }
            if (input.find("close") != std::string::npos) {
                flg = false;
            }
        }

}

Studio::Studio(){
    init("/home/spl211/ExmapleInput.txt");
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

void Studio::init(std::string address) {

    int id_counter = 0;

    std::ifstream inFile;
    inFile.open(address);
    if (!inFile) {
        std::cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }

    std::string line;
    int num_of_trainer = 0;
    while(getline(inFile, line)) {
        int num;
        std::stringstream ss;
        ss << line;
        ss >> num;
        //trainers number
        if(num != 0 &  !line.empty() &
           line.find(",")== std::string::npos) {
            num_of_trainer = num;
        }

        //trainers capacities
        if(num != 0 &  !line.empty() &
           line.find(",")!= std::string::npos){
            std::vector<int> capacities;
            std::stringstream ss_comma(line);

            while (ss_comma.good()){
                std::string sub;
                int capacity;
                ss_comma>>capacity;
                getline(ss_comma,sub,',');
                capacities.push_back(capacity);
            }

            for(int i=0; i<capacities.size(); i++)
                trainers.push_back(new Trainer(capacities[i]));
        }

        //workout options
        if(num == 0 &  !line.empty() & line[0] != '#') {
            std::vector<std::string> workout_str;
            std::stringstream ss_comma(line);

            while (ss_comma.good()){
                std::string sub;
                getline(ss_comma,sub,',');
                workout_str.push_back(sub);
            }

            std::string name = workout_str[0];
            std::string type_str = workout_str[1];
            WorkoutType type;
            if(type_str.find("Anaerobic")!= std::string::npos)
                type = ANAEROBIC;
            if(type_str.find("Mixed")!= std::string::npos)
                type = MIXED;
            if(type_str.find("Cardio")!= std::string::npos)
                type = CARDIO;

            std::string price_str = workout_str[2];
            price_str = price_str.substr(1);
            int price;
            price = std::stoi( price_str );
            workout_options.push_back(Workout(id_counter, name,price,type));
            id_counter++;
        }
    }
}

