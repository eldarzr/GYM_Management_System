#ifndef TRAINER_H_
#define TRAINER_H_

#include <vector>
#include "Customer.h"
#include "Workout.h"

typedef std::pair<int, Workout> OrderPair;

class Trainer{
public:
    Trainer(int t_capacity);
    Trainer(const Trainer& other);
    Trainer& operator=(const Trainer& other);
    virtual ~Trainer();
    Trainer(Trainer&& other);
    Trainer& operator=(Trainer&& other);

    int getCapacity() const;
    void addCustomer(Customer* customer);
    void removeCustomer(int id);
    Customer* getCustomer(int id);
    std::vector<Customer*>& getCustomers();
    std::vector<OrderPair>& getOrders();
    void order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout>& workout_options);
    void openTrainer();
    void closeTrainer();
    int setSalary();
    int getSalary();
    bool isOpen();

    Trainer* clone();

    void setSalary(int salary);

private:
    int capacity;
    bool open;
    int salary;
    std::vector<Customer*> customersList;
    std::vector<OrderPair> orderList; //A list of pairs for each order for the trainer - (customer_id, Workout)
    void clear();
    void copy(const Trainer& other);
    bool isCustomerExist(int id);
    void eraseOrderList(int id);
};


#endif