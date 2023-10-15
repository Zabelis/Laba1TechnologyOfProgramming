//
// Created by melle on 15.10.2023.
//

#ifndef LABA1TECHNOLOGYOFPROGRAMMING_KEEPER_H
#define LABA1TECHNOLOGYOFPROGRAMMING_KEEPER_H

#include "Garage.h"


class Keeper {
private:
    Garage **garages;
    int garagesCount;
    int garagesMax;

public:
    Keeper();

    void addGarage(Garage *garage);

    void removeGarage(Garage *garage);

    void save(std::string filename);

    void load(std::string filename);
};


#endif //LABA1TECHNOLOGYOFPROGRAMMING_KEEPER_H
