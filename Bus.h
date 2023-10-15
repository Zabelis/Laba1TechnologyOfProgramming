//
// Created by melle on 15.10.2023.
//

#ifndef LABA1TECHNOLOGYOFPROGRAMMING_BUS_H
#define LABA1TECHNOLOGYOFPROGRAMMING_BUS_H


#include "Garage.h"

class Bus : public Garage {
private:
    string brand;
    string model;
    int passengerSeats;
    int totalSeats;
    string destination;

public:
    Bus(string brand, string model, int passengerSeats, int totalSeats, string destination);

    ~Bus();

    void print();

    string getDetails();
};


#endif //LABA1TECHNOLOGYOFPROGRAMMING_BUS_H
