#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent ze;

    //tests that types are working
    std::cout << ze.get_type(0) + "\n";
    std::cout << ze.get_type(1) + "\n";
    std::cout << ze.get_type(2) + "\n";
    std::cout << ze.get_type(-1) + "\n";
    std::cout << ze.get_type(3) + "\n";

    //adds a new type
    ze.setZombieType(-1);
    std::cout << ze.get_type(ze.chosen_type);
    std::cout << std::endl;
    Zombie *custom_type_zombie = ze.newZombie("custom type zombie");
    custom_type_zombie->announce();
    delete custom_type_zombie;

    //makes a random zombie
    Zombie *rando = ze.randomChump();
    rando->announce();

    //selects different type
    ze.setZombieType(1);
    //makes new zombie
    Zombie *Bob = ze.newZombie("Bob");
    Bob->announce();

    delete Bob;
    delete rando;

    Zombie stack_zombie;
    stack_zombie.set_name("stack zombie");
    stack_zombie.set_type("on the stack");
    stack_zombie.announce();
    return (0);
}