//
// Created by melle on 15.10.2023.
//

#include "Bus.h"


Bus::Bus(string brand, string model, int passengerSeats, int totalSeats, string destination) {
    this->brand = brand;
    this->model = model;
    this->passengerSeats = passengerSeats;
    this->totalSeats = totalSeats;
    this->destination = destination;

    cout << "Bus constructor called" << endl;
};

Bus::~Bus() {
    cout << "Bus destructor called" << endl;
}

void Bus::print() {
    cout << "Bus Details: " << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Passenger Seats: " << passengerSeats << endl;
    cout << "Total Seats: " << totalSeats << endl;
    cout << "Destination: " << destination << endl;
}

string Bus::getDetails() {
    return "Bus " + brand + " " + model + " " + to_string(passengerSeats) + " " + to_string(totalSeats) + " " +
           destination;
}