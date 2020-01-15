#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    std::string *types;
    
    int         types_size;

    public:
        int         chosen_type;
        ZombieEvent()
        {
            chosen_type = 0;
            types = new std::string[3];
            types_size = 3;
            types[0] = "Normal Zombie";
            types[1] = "Fast Zombie";
            types[2] = "High-Functioning Zombie";
        }
        ~ZombieEvent()
        {
            delete[] types;
        }
        std::string get_type(int);
        void        setZombieType(int);
        Zombie      *randomChump();
        Zombie      *newZombie(std::string);
};

#endif