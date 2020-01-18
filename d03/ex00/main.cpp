#include "FragTrap.hpp"

int main()
{
    FragTrap trap1;
    FragTrap trap2("trap2");
    FragTrap trap3("trap3");

    trap1.meleeAttack(trap2.name);
    trap2.takeDamage(trap1.melee_attack_damage);
    trap2.rangedAttack(trap3.name);
    trap3.takeDamage(trap2.ranged_attack_damage);
    trap3.meleeAttack(trap1.name);
    trap1.takeDamage(trap3.melee_attack_damage);
    trap1.beRepaired(10);
    return (0);
}