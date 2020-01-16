#include "ZombieHorde.hpp"

int main(void)
{
    std::cout << "heap horde with size 20 given\n";
    ZombieHorde *Heap_Horde = new ZombieHorde(20);
    Heap_Horde->announce();
    delete Heap_Horde;

    std::cout << "stack horde with default 10 zombies\n";
    ZombieHorde Horde;
    Horde.announce();

    return (0);
}