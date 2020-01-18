#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <" << std::to_string(ranged_attack_damage - armor_damage_reduction) << "> points of damage !\n";
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << name << "> melee attacks <" << target << ">, causing <" << std::to_string(ranged_attack_damage - armor_damage_reduction) << "> points of damage !\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP <" << name << "> took <" << std::to_string(amount - armor_damage_reduction) << "> points of damage !\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (hit_points )
    std::cout << "FR4G-TP <" << name << "> was repaired <" << std::to_string(amount) << "> points, hit_points at <" << hit_points << ">!\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (&target)
    {
        ;
    }
}






















FragTrap::FragTrap()
{
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    name = "new robot";
}

FragTrap::FragTrap(std::string const & new_name)
{
    std::cout << "name constructor\n";
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    name = "new robot";
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "copy constructor\n";
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    name = "new robot";
}

FragTrap::~FragTrap()
{
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
    if (this != &assign)
    {
        std::cout << "assignation overload\n";
        hit_points = assign.hit_points;
        max_hit_points = assign.max_hit_points;
        energy_points = assign.energy_points;
        max_energy_points = assign.max_energy_points;
        level = assign.level;
        melee_attack_damage = assign.melee_attack_damage;
        ranged_attack_damage = assign.ranged_attack_damage;
        armor_damage_reduction = assign.armor_damage_reduction;
        name = assign.name;
    }
    return (*this);
}