#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    std::string my_type;
    std::string my_name;

    public:
        Zombie() : my_type("unset"), my_name("unset") {}
        void set_name(std::string);
        void set_type(std::string);
        void announce(void);
};

#endif