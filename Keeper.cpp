//
// Created by melle on 15.10.2023.
//

#include "Keeper.h"

Keeper::Keeper() {
    garages = nullptr;
    garagesCount = 0;
    garagesMax = 0;
}

void Keeper::addGarage(Garage *garage) {
    if (garagesCount == garagesMax) {
        Garage **newGarages = new Garage *[garagesMax + 1];
        for (int i = 0; i < garagesCount; i++) {
            newGarages[i] = garages[i];
        }
        delete[] garages;
        garages = newGarages;
        garagesMax++;
    }

    garages[garagesCount++] = garage;
}

void Keeper::removeGarage(Garage *garage) {
    for (int i = 0; i < garagesCount; i++) {
        if (garages[i] == garage) {
            delete garages[i];
            for (int j = i; j < garagesCount - 1; j++) {
                garages[j] = garages[j + 1];
            }
            garagesCount--;
            return;
        }
    }
}

void Keeper::save(std::string filename) {
    std::ofstream file(filename);
    file << garagesCount << std::endl;
    for (int i = 0; i < garagesCount; i++) {
        // Save garage data
    }
    file.close();
}

void Keeper::load(std::string filename) {
    std::ifstream file(filename);
    int count;
    file >> count;
    for (int i = 0; i < count; i++) {
        // Load garage data
    }
    file.close();
    garagesCount = count;
}