#include "Human.hpp"

const Brain   &Human::getBrain() const
{
    return (brain);
}

std::string Human::identify() const
{
    
    return (brain.identify());
}