//
// Created by spl211 on 07/11/2021.

#include "../include/Workout.h"

Workout::Workout(int w_id, std::string w_name, int w_price, WorkoutType w_type): id(w_id), name(w_name), price(w_price), type(w_type) {}

Workout::int getId() const {return id;}
std::string getName() const;
int getPrice() const;
WorkoutType getType() const;



//

