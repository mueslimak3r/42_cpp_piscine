#include "Zombie.hpp"

void    Zombie::set_name(std::string name)
{
    my_name = name;
}

void    Zombie::set_type(std::string type)
{
    my_type = type;
}

void    Zombie::announce()
{
    std::cout << "<" + my_name + " (" + my_type + ")> Braiiiiiiinnnssss..." << std::endl;
}