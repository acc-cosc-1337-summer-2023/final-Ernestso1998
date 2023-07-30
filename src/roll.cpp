#include <iostream>
#include "roll.h"


Roll::Roll(Die& dice1, Die& dice2) : die1(dice1) , die2(dice2){};

void Roll::roll_die()
{
	die1.roll();
	die2.roll();

	value = die1.rolled_value() + die2.rolled_value();
    
    rolled = true;

}

int Roll::roll_value()const
{ 
    return value; 
}
