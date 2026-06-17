#include <string>
#include "homunculus_H.h"

        Homunculus::Homunculus()
        {
            name= "";
            nameOfDoctor= "";
            level = 0;

            attack = 0;
            maxHealth = 0;
            currentHealth = 0;
        }        

        Homunculus::Homunculus(std::string name, 
            std::string nameOfDoctor, int level)
        {
            this->name = name;
            this->nameOfDoctor = nameOfDoctor;
            this->level = level;

        }

        std::string Homunculus::getNameOfHomunculus() const
        {
            return name;
        }

        //return the attack of the Homunculus
        int Homunculus::getAttack() const
        {
            return attack;
        }

        //return the current health of the Homunculus
        int Homunculus::getCurrentHealth() const
        {
            return currentHealth;
        }

        //returns the level of the Homunculus
        int Homunculus::getLevel() const
        {
            return level;
        }

        // damage a Homunculus
        void Homunculus::doDamage(int damageAmount)
        {
            this->currentHealth = this->currentHealth - damageAmount;
        }

        //takes in target Homunculus and does damage to it
        void Homunculus::damageHomunculus(
            Homunculus& targetHomunculus, int damageAmount)
        {
            targetHomunculus.doDamage(damageAmount);
        }




