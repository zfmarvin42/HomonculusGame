
#include "homunculus_H.h"
#include "homonculusEnclosureTile_H.h"
#include <string>

    HomonculusEnclosureTile::HomonculusEnclosureTile(
        bool moveable, std::string type)
    {
        this->moveable = moveable;
        this->type = type; 
        homunculiOnTile[0] = Homunculus();
        homunculiOnTile[0] = Homunculus();
        counter = 0;
    }

    bool HomonculusEnclosureTile::homonculusAttemptsToEntersTile(
        Homunculus& targetHomunculus)
    {
        if((this->counter == 0) 
            && (homunculiOnTile[0].getNameOfHomunculus() == ""))
        {
            homonculusEntersTile(targetHomunculus, 0);
            return true;
        }
        else if((this->counter == 1) && (homunculiOnTile[1].getNameOfHomunculus() == ""))
        {
            homonculusEntersTile(targetHomunculus, 1);
            return true;
        }
        else{
            return false; 
        }
    }

    void HomonculusEnclosureTile::homonculusEntersTile(
        Homunculus& targetHomunculus, int slot)
    {
        homunculiOnTile[slot] = targetHomunculus;
        counter++;
    }




    