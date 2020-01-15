#include <iostream>

class Pony
{
    int alive, age, height, weight, water, food;
    public:
        Pony() : alive(1), age(7), height(3), weight(150), water(40), food(40) {}
        Pony(int);
        void give_food (int);
        void give_water (int);
        void exercise (int);
        void check_health (void);      
};