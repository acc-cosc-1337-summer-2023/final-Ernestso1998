#include <iostream>
#include <cstdlib>
#include "die.h"

class Roll
{
public:
    Roll(Die& dice1, Die& dice2);
    void roll_die();
    int roll_value() const;

private:
    Die& die1;
    Die& die2;
    int value;
    bool rolled = false;
}; 
