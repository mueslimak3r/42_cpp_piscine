#include "Pony.hpp"

Pony::Pony (int base_values)
{
    age = base_values;
    height = base_values;
    weight = base_values;
    food = base_values;
    water = base_values;
    alive = 1;
}

void Pony::check_health (void)
{
    if (!alive)
    {
        std::cout << "pony is 100% dead" << std::endl;
    }
    else
    {
        std::cout << "pony age: " << age << std::endl;
        std::cout << "pony height in feet: " << height << std::endl;
        std::cout << "pony weight in pounds: " << weight << std::endl;
        std::cout << "pony food fullness %: " << food << std::endl;
        std::cout << "pony water fullness %: " << water << std::endl;
    }
}

void Pony::exercise (int amt)
{
    if (!alive)
    {
        std::cout << "can't excercise, pony is dead!" << std::endl;
        return ;
    }
    if (food - amt <= 0 || water - amt <= 0)
    {
        std::cout << "excercised pony too much, it exploded!" << std::endl;
        alive = 0;
    }
    else
    {
        water -= amt;
        food -= amt;
        weight--;
        std::cout << "excercised pony" << std::endl;
    }
}

void Pony::give_water (int amt)
{
    if (!alive)
    {
        std::cout << "can't give water, pony is dead!" << std::endl;
        return ;
    }
    if (water + amt > 100)
    {
        std::cout << "gave pony too much water, it exploded!" << std::endl;
        alive = 0;
    }
    else
    {
        water += amt;
        std::cout << "gave water to pony" << std::endl;
    }
}

void Pony::give_food (int amt)
{
    if (!alive)
    {
        std::cout << "can't feed, pony is dead!" << std::endl;
        return ;
    }
    if (food + amt > 100)
    {
        std::cout << "overfed pony, it exploded!" << std::endl;
        alive = 0;
    }
    else
    {
        food += amt;
        weight++;
        std::cout << "fed pony" << std::endl;
    }
}
        