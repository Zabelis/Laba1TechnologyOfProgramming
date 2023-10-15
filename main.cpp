#include "Keeper.h"
#include "Car.h"
#include <iostream>
#include <fstream>


void showMenu() {
    std::cout << "\nMenu:\n"
                 "1. Add Car\n"
                 "2. -\n"
                 "3. -\n"
                 "4. Save to File\n"
                 "5. Restore from File\n"
                 "6. Exit\n";
}

int main() {
    Keeper keeper;
    while (true) {
        showMenu();
        int choice;
        std::cout << "\nEnter your choice:\n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                int type;
                string mark;
                string model;
                int engineCapacity;
                string color;
                string checkpointType;

                std::cout << "\nEnter car mark:\n";
                std::cin >> mark;

                std::cout << "\nEnter car model:\n";
                std::cin >> model;

                std::cout << "\nEnter car engine capacity (int-type):\n";
                std::cin >> engineCapacity;

                std::cout << "\nEnter car color:\n";
                std::cin >> color;

                std::cout << "\nEnter car checkpoint type:\n";
                std::cin >> checkpointType;
                Car *car = new Car(mark, model, engineCapacity, color, checkpointType);
                keeper.addGarage(car);
                car->print();
                break;
        }
    }
}