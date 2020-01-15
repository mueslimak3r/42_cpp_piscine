#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
    std::cout << "pony on the heap" << std::endl;
    Pony *pony = new Pony(10);
    
    pony->check_health();
    pony->exercise(20);
    pony->check_health();
    pony->give_food(20);
    pony->give_water(20);
    pony->check_health();
    pony->give_food(150);
    pony->check_health();
    delete pony;
}

void ponyOnTheStack()
{
    std::cout << "pony on the stack" << std::endl;
    Pony pony;

    pony.check_health();
    pony.exercise(20);
    pony.check_health();
    pony.give_food(20);
    pony.give_water(20);
    pony.check_health();
    pony.exercise(200);
    pony.check_health();
}

int main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}