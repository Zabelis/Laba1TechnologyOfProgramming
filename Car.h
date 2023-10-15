//
// Created by melle on 15.10.2023.
//

#ifndef LABA1TECHNOLOGYOFPROGRAMMING_CAR_H
#define LABA1TECHNOLOGYOFPROGRAMMING_CAR_H


#include "Garage.h"

class Car : public Garage {
private:
    string make;
    string model;
    int engineCapacity;
    string color;
    string checkpointType;

public:
    Car(string make, string model, int engineCapacity, string color, string checkpointType);
    ~Car();
    void print();
};


#endif //LABA1TECHNOLOGYOFPROGRAMMING_CAR_H
