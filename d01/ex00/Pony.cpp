/*
class Pony {
    int alive, age, height, weight, thirst, hunger;
    Pony() : alive(1), age(7), height(3), weight(150), thirst(30), hunger(40) {}
    public:
        void give_food (int);
        void give_water (int);
        void exercise (int);
        void check_health (void);
};


void give_water (void);
        void exercise (int);
        void check_health (void);

*/
#include "Pony.hpp"

Pony::Pony (int)
{
    age = 10;
    height = 10;
    weight = 10;
    food = 10;
    water = 10;
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
        std::cout << "can't excercise, pony is dead!" << std::endl;
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
        std::cout << "can't give water, pony is dead!" << std::endl;
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
        std::cout << "can't feed, pony is dead!" << std::endl;
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
        