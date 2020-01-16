#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    const Brain brain;

    public:
        Human() : brain() {}
        const Brain &getBrain() const;
        std::string identify(void) const;
};

#endif