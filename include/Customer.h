#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <vector>
#include <string>
#include "Workout.h"

class Customer{
public:
    Customer(std::string c_name, int c_id);
    Customer(const Customer& other);
    virtual ~Customer();
    virtual std::vector<int> order(const std::vector<Workout> &workout_options)=0;
    virtual std::string toString() const = 0;
    virtual Customer* clone() = 0;
    std::string getName() const;
    int getId() const;

private:
    const std::string name;
    const int id;
};


class SweatyCustomer : public Customer {
public:
    SweatyCustomer(std::string name, int id);
    SweatyCustomer(const SweatyCustomer& other);
    virtual ~SweatyCustomer();
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
    virtual Customer* clone();
private:
};


class CheapCustomer : public Customer {
public:
    CheapCustomer(std::string name, int id);
    CheapCustomer(const CheapCustomer& other);
    virtual ~CheapCustomer();
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
    virtual Customer* clone();
private:
    int getCheapestWorkout(const std::vector<Workout> &vector);
};


class HeavyMuscleCustomer : public Customer {
public:
    HeavyMuscleCustomer(std::string name, int id);
    std::vector<int> order(const std::vector<Workout> &workout_options);
    HeavyMuscleCustomer(const HeavyMuscleCustomer& other);
    virtual ~HeavyMuscleCustomer();
    virtual Customer* clone();
    std::string toString() const;

private:
};


class FullBodyCustomer : public Customer {
public:
    FullBodyCustomer(std::string name, int id);
    FullBodyCustomer(const FullBodyCustomer& other);
    virtual ~FullBodyCustomer();
    virtual Customer* clone();
    std::vector<int> order(const std::vector<Workout> &workout_options);
    std::string toString() const;
private:
    int minPlanId(const std::vector<Workout> &vector, WorkoutType type);
    int maxPlanId(const std::vector<Workout> &workout_options, WorkoutType type);
};


#endif