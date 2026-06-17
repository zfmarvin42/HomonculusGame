#ifndef HOMUNCULUS_H
#define HOMUNCULUS_H

#include <string>

class Homunculus
{
    private:    
        int attack;               //attack of the Homunculus
        int maxHealth;            //max health of the Homunculus
        int currentHealth;        //current health of the Homunculus
    public:
        std::string name;         //name of your Homunculus
        std::string nameOfDoctor; //name of the doctor who created the Homunculus
        int level;                //level of the Homunculus
        
        Homunculus();

        Homunculus(std::string name, 
            std::string nameOfDoctor, int level);

        std::string getNameOfHomunculus() const;

        int getAttack() const;

        int getCurrentHealth()const;

        int getLevel()const;

        void doDamage(int damageAmount);

        void damageHomunculus(Homunculus& targetHomunculus, int damageAmount);

        

};




#endif