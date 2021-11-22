#ifndef STUDIO_H_
#define STUDIO_H_

#include <vector>
#include <string>
#include "Workout.h"
#include "Trainer.h"
#include "Action.h"


class Studio{
public:
    Studio();
    Studio(const std::string &configFilePath);
    Studio(const Studio &other);
    virtual  ~Studio();
    Studio & operator = (const Studio &other);
    Studio(Studio &&otherStudio);
    Studio & operator = (Studio && other);
    void copy(const Studio &other);

    void start();
    int getNumOfTrainers() const;
    Trainer* getTrainer(int tid);
    const std::vector<BaseAction*>& getActionsLog() const; // Return a reference to the history of actions
    std::vector<Workout>& getWorkoutOptions();

private:
    bool open;
    std::vector<Trainer*> trainers;
    std::vector<Workout> workout_options;
    std::vector<BaseAction*> actionsLog;
    int id_customer;
    int id_counter;

    void init(std::string address);

    void clear();

    std::ifstream readFile(std::string address);
    void initTrainers(std::string line);
    void initWorkouts(std::string line);

    void openAct(std::string input);

    void orderAct(std::string input);

    void statusAct(std::string input);

    void moveAct(std::string input);
    void workoutOptionsAct();
    void logAct();

    Customer *parseCastumer(std::string sub, std::string name);

    WorkoutType parseType(std::string type_str);
};

#endif