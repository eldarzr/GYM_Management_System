//
// Created by spl211 on 07/11/2021.

#include "../include/Workout.h"

Workout::Workout(int w_id, std::string w_name, int w_price, WorkoutType w_type): id(w_id), name(w_name), price(w_price), type(w_type) {}
Workout::Workout(const Workout &other): id(other.id), name(other.name), price(other.price), type(other.type) {}
Workout::~Workout() {}


int Workout::getId() const {return id;}
std::string Workout::getName() const{return name;}
int Workout::getPrice() const{return price;}
WorkoutType Workout::getType() const{return type;}
std::string Workout::toString() const{
    std::string ret = name + ", ";
    if(type == ANAEROBIC)
        ret = ret + "Anaerobic, ";
    else if(type == MIXED)
        ret = ret + "Mixed, ";
    else if(type == CARDIO)
        ret = ret + "Cardio, ";
    ret = ret + std::to_string(price);

    return ret;
}
