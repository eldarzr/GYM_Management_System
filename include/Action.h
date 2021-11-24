#ifndef ACTION_H_
#define ACTION_H_

#include <string>
#include <iostream>
#include "Customer.h"

enum ActionStatus{
    COMPLETED, ERROR
};

//Forward declaration
class Studio;

class BaseAction{
public:
    BaseAction();
    BaseAction(const BaseAction& other);
    virtual BaseAction* operator=(const BaseAction& other);
    virtual ~BaseAction();
    ActionStatus getStatus() const;
    virtual void act(Studio& studio)=0;
    virtual std::string toString() const=0;
    virtual BaseAction* clone()=0;
protected:
    void complete();
    void error(std::string errorMsg);
    std::string getErrorMsg() const;
    virtual void clear();
private:
    std::string errorMsg;
    ActionStatus status;
};


class OpenTrainer : public BaseAction {
public:
    OpenTrainer(int id, std::vector<Customer *> &customersList);
    OpenTrainer(const OpenTrainer& other);
    virtual ~OpenTrainer();
    virtual BaseAction* clone();

    void act(Studio &studio);
    std::string toString() const;
private:
    void copy(const OpenTrainer& other);
    void clear();
    const int trainerId;
    std::vector<Customer *> customers;
    std::string customerNameError;
};


class Order : public BaseAction {
public:
    Order(int id);
    virtual ~Order();
    Order(const Order& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;

private:
    const int trainerId;
};


class MoveCustomer : public BaseAction {
public:
    MoveCustomer(int src, int dst, int customerId);
    virtual ~MoveCustomer();
    MoveCustomer(const MoveCustomer& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
    bool isCustomerExists(Studio &std);
private:
    const int srcTrainer;
    const int dstTrainer;
    const int id;
};


class Close : public BaseAction {
public:
    Close(int id);
    virtual ~Close();
    Close(const Close& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
private:
    const int trainerId;
};


class CloseAll : public BaseAction {
public:
    CloseAll();
    virtual ~CloseAll();
    CloseAll(const CloseAll& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
private:
    bool isAct;
};


class PrintWorkoutOptions : public BaseAction {
public:
    PrintWorkoutOptions();
    virtual ~PrintWorkoutOptions();
    PrintWorkoutOptions(const PrintWorkoutOptions& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
private:
};


class PrintTrainerStatus : public BaseAction {
public:
    PrintTrainerStatus(int id);
    virtual ~PrintTrainerStatus();
    PrintTrainerStatus(const PrintTrainerStatus& other);
    void act(Studio &studio);
    std::string toString() const;
    virtual BaseAction* clone();
private:
    const int trainerId;
};


class PrintActionsLog : public BaseAction {
public:
    PrintActionsLog();
    virtual ~PrintActionsLog();
    PrintActionsLog(const PrintActionsLog& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
private:
};


class BackupStudio : public BaseAction {
public:
    BackupStudio();
    virtual ~BackupStudio();
    BackupStudio(const BackupStudio& other);
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;
private:
};


class RestoreStudio : public BaseAction {
public:
    RestoreStudio();
    virtual ~RestoreStudio();
    RestoreStudio(const  RestoreStudio & other) ;
    void act(Studio &studio);
    virtual BaseAction* clone();
    std::string toString() const;

};


#endif