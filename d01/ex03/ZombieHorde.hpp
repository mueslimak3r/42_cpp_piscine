#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <ctime>
#include <iostream>

class ZombieHorde
{
    Zombie      **zombie_horde;
    int         horde_size;

    public:
        ZombieHorde();
        ZombieHorde(int);
        ~ZombieHorde();
        void announce();
};

#endif