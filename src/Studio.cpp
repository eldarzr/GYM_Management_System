//
// Created by spl211 on 13/11/2021.
//

#include "../include/Studio.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>

void Studio::start(){
    bool flg = true;
    while (flg) {
        std::string input;
        std::getline( std::cin, input);
        //BaseAction* action;
        if (input.find("open") != std::string::npos) {
            openAct(input);
        }
        if (input.find("order") != std::string::npos) {
            orderAct(input);
        }
        if (input.find("status") != std::string::npos) {
            statusAct(input);
        }
        if (input.find("move") != std::string::npos) {
            moveAct(input);
        }
        if (input.find("workout_options") != std::string::npos) {
            workoutOptionsAct();
        }
        if (input.find("log") != std::string::npos) {
            logAct();
        }
        if (input.find("close") != std::string::npos) {
            flg = false;
        }
/*        action->act(*this);
        actionsLog.push_back(action);
        if(action->getStatus() == ERROR)
            std::cout << action.*/
    }

}

Studio::Studio():id_customer(0), id_counter(0){
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
Studio::Studio(const std::string &configFilePath):id_customer(0){}

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

    std::ifstream inFile = readFile(address);

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
            initTrainers(line);
        }

        //workout options
        if(num == 0 &  !line.empty() & line[0] != '#') {

            initWorkouts(line);
        }
    }
}
std::ifstream Studio::readFile(std::string address){
    std::ifstream inFile;
    inFile.open(address);
    if (!inFile) {
        std::cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }
    return inFile;
}

void Studio::initTrainers(std::string line){
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
void Studio::initWorkouts(std::string line){

    std::vector<std::string> workout_str;
    std::stringstream ss_comma(line);

    //seperate by comma
    while (ss_comma.good()){
        std::string sub;
        getline(ss_comma,sub,',');
        workout_str.push_back(sub);
    }
    std::string name = workout_str[0];
    std::string type_str = workout_str[1];
    WorkoutType type;

    //identify the type
    type = parseType(type_str);

    //get the price from input
    std::string price_str = workout_str[2];

    price_str.erase(std::remove_if(price_str.begin(), price_str.end(), ::isspace), price_str.end());
    //price_str = price_str.substr(1);
    int price;
    price = std::stoi( price_str );
    workout_options.push_back(Workout(id_counter, name,price,type));
    id_counter++;
}
void Studio::openAct(std::string input){
    input = input.substr(5);
    std::stringstream ss_space(input);

    std::string sub;
    getline(ss_space, sub, ' ');
    int trainer_num = std::stoi(sub);

    std::vector<Customer *> customers;
    //seperate by comma and space
    while (ss_space.good()) {
        std::string sub;
        getline(ss_space, sub, ',');
        std::string name = sub;
        getline(ss_space, sub, ' ');
        std::string srg = sub;
        customers.push_back(parseCastumer(sub,name));
        id_customer++;
    }
    BaseAction* action = new OpenTrainer(trainer_num,customers);
    action->act(*this);
    actionsLog.push_back(action);
    //return new OpenTrainer(trainer_num, customers);
}
void Studio::orderAct(std::string input){

    input = input.substr(6);
    int trainer_num = std::stoi(input);
    BaseAction* action = new Order(trainer_num);
    action->act(*this);
    actionsLog.push_back(action);
}
void Studio::statusAct(std::string input){
    input = input.substr(7);
    int trainer_num = std::stoi(input);
    BaseAction* action = new PrintTrainerStatus(trainer_num);
    action->act(*this);
    actionsLog.push_back(action);
}
void Studio::workoutOptionsAct() {
    BaseAction* action = new PrintWorkoutOptions();
    action->act(*this);
    actionsLog.push_back(action);
}
void Studio::logAct() {
    BaseAction* action = new PrintActionsLog();
    action->act(*this);
    actionsLog.push_back(action);
}
void Studio::moveAct(std::string input){
    input = input.substr(5);

    std::stringstream ss_space(input);
    std::string sub;
    getline(ss_space, sub, ' ');
    int src_trainer_num = std::stoi(sub);
    getline(ss_space, sub, ' ');
    int des_trainer_num = std::stoi(sub);
    getline(ss_space, sub, ' ');
    int custumer_id = std::stoi(sub);

    BaseAction* action = new MoveCustomer(src_trainer_num, des_trainer_num, custumer_id);
    action->act(*this);
    actionsLog.push_back(action);
}
Customer* Studio::parseCastumer(std::string sub, std::string name){
    if (sub.find("swt") != std::string::npos)
        return new SweatyCustomer(name, id_customer);
    if (sub.find("chp") != std::string::npos)
        return new CheapCustomer(name, id_customer);
    if (sub.find("mcl") != std::string::npos)
        return new HeavyMuscleCustomer(name, id_customer);
    if (sub.find("fbd") != std::string::npos)
        return new FullBodyCustomer(name, id_customer);
    return nullptr;
}
WorkoutType Studio::parseType(std::string type_str){
    if(type_str.find("Anaerobic")!= std::string::npos)
        return ANAEROBIC;
    if(type_str.find("Mixed")!= std::string::npos)
        return MIXED;
    if(type_str.find("Cardio")!= std::string::npos)
        return CARDIO;
    return ANAEROBIC;
}
