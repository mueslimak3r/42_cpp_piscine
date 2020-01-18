#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

class FragTrap
{
    public:
        int hit_points;
        int max_hit_points;
        int energy_points;
        int max_energy_points;
        int level;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;
        std::string name;
        FragTrap ();
        FragTrap (std::string const & new_name);
        FragTrap (const FragTrap &copy);
        ~FragTrap ();
        FragTrap & operator=(const FragTrap &assign);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
};

#endif