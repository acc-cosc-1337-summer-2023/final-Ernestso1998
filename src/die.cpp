#include <iostream>
#include <cstdlib>
#include <random>
#include "die.h"


void Die::roll()
{
    std::random_device rd;
    std::uniform_int_distribution<int>sides(1, 6);
        
    roll_value = sides(rd); 

}

int Die::rolled_value()const 
{ 
    return roll_value; 
}
