//
// Created by melle on 15.10.2023.
//

#include "Car.h"
#include "Garage.h"

Car::Car(string make, string model, int engineCapacity, string color, string checkpointType) {
    this->make = make;
    this->model = model;
    this->engineCapacity = engineCapacity;
    this->color = color;
    this->checkpointType = checkpointType;

    cout << "Car constructor called" << endl;
}

Car::~Car() {
    cout << "Car destructor called" << endl;
}

void Car::print() {
    cout << "Car Details: " << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Engine Capacity: " << engineCapacity << endl;
    cout << "Color: " << color << endl;
    cout << "Checkpoint Type: " << checkpointType << endl;
}