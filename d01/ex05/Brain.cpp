#include "Brain.hpp"

std::string Brain::identify() const
{
    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;
    std::string name = ss.str(); 
    return (name);
}