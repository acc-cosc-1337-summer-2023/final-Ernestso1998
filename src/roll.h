#include <iostream>
#include <cstdlib>
#include "die.h"

#ifndef ROLL_H
#define ROLL_H
class Roll
{
public:
    Roll(Die& die1, Die& die2);
    void roll_die();
    int roll_value() const;

private:
    Die& die1;
    Die& die2;
    int value;
    bool rolled = false;
}; 
#endif