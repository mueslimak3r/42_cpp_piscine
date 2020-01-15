#include "ZombieEvent.hpp"
/*
Zombie  *newZombie(std::string name)
{

}
*/

void        ZombieEvent::setZombieType(int type)
{
    std::string input;
    std::string *temp;

    if (type == -1) // if type is -1 it reads a new type, adds, and selects it
    {
        std::cout << "enter new type: ";
        std::getline(std::cin, input);
        temp = new std::string[types_size + 1];
        memcpy( temp, types, types_size * sizeof(std::string*) );
        temp[types_size] = input;
        chosen_type = types_size;
        types_size++;
        delete[] types;
        types = temp;
    }
    else if (type >= 0 && type < types_size) // otherwise it selects from the existing types
        chosen_type = type;
}

std::string ZombieEvent::get_type(int type)
{
    if (type < types_size && type >= 0)
        return (types[type]);
    else
        return ("bad type");
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie  *new_zombie = new Zombie;

    new_zombie->set_name(name);
    new_zombie->set_type(get_type(chosen_type));
    return (new_zombie);
}

Zombie *ZombieEvent::randomChump()
{
    Zombie  *new_zombie;

    int curr_type = chosen_type;
    chosen_type = rand() % types_size;
    new_zombie = newZombie("random zombie" + std::to_string(rand()));
    chosen_type = curr_type;
    return (new_zombie);
}