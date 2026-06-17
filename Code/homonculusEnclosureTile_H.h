#ifndef HOMUNCULUSENCLOSURETILE_H
#define HOMUNCULUSENCLOSURETILE_H

#include <string>
#include "homunculus_H.h"

class HomonculusEnclosureTile
{
    public:
        bool moveable;
        std::string type;
        Homunculus homunculiOnTile[2];
        //if counter = 0 then zero active Homunculi in each slot
        //if counter = 1 then first Homunculi in slot one 
        //if counter 2 then two active Homunculi in both slots
        int counter; 

        HomonculusEnclosureTile(bool moveable, std::string type);

        bool homonculusAttemptsToEntersTile(Homunculus& targetHomunculus);

        void homonculusEntersTile(Homunculus& targetHomunculus, int slot);
};

#endif


