//
// Created by melle on 15.10.2023.
//

#include "Car.h"
#include "Garage.h"

Car::Car(string brand, string model, int engineCapacity, string color, string checkpointType) {
    this->brand = brand;
    this->model = model;
    this->engineCapacity = engineCapacity;
    this->color = color;
    this->checkpointType = checkpointType;

    cout << "Car constructor called" << endl;
}

Car::Car(const Car &other) {
    this->brand = other.brand;
    this->model = other.model;
    this->engineCapacity = other.engineCapacity;
    this->color = other.color;
    this->checkpointType = other.checkpointType;
    cout << "Car copy constructor called" << endl;
}

Car::~Car() {
    cout << "Car destructor called" << endl;
}

void Car::print() {
    cout << "Car Details: " << endl;
    cout << "Make: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Engine Capacity: " << engineCapacity << endl;
    cout << "Color: " << color << endl;
    cout << "Checkpoint Type: " << checkpointType << endl;
}

string Car::getDetails() {
    return "Car " + brand + " " + model + " " + to_string(engineCapacity) + " " + color + " " + checkpointType;
}