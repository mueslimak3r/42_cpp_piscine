#include "ZombieHorde.hpp"

static Zombie *randomChump()
{
    std::string types[3] = { "Normal Zombie", "Fast Zombie", "High-Functioning Zombie" };
    Zombie  *new_zombie = new Zombie;

    
    new_zombie->set_name("random zombie " + std::to_string(std::rand()));
    new_zombie->set_type(types[std::rand() % 3]);
    return (new_zombie);
}

ZombieHorde::ZombieHorde()
{
    horde_size = 10;
	std::srand(std::time(nullptr));;
    zombie_horde = new Zombie*[horde_size];
    for (int i = 0; i < horde_size; i++)
    {
        zombie_horde[i] = randomChump();
    }
}

ZombieHorde::ZombieHorde(int amount)
{
    horde_size = amount;
	std::srand(std::time(nullptr));;
    zombie_horde = new Zombie*[horde_size];
    for (int i = 0; i < horde_size; i++)
    {
        zombie_horde[i] = randomChump();
    }
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombie_horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < horde_size; i++)
		zombie_horde[i]->announce();
}