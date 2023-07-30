#include <iostream>
#include <cstdlib>
#include <time.h>
#include "roll.h"
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"


int main()
{
	srand(time(0));

	Die die1, die2;
	Shooter shooter;
	Roll* roll = shooter.throw_die(die1, die2);

    Phase_Comeout come_out;
    while (come_out.get_outcome(roll) == RollOutcome::natural || come_out.get_outcome(roll) == RollOutcome::craps) 
    {
        std::cout << "Rolled " << roll->roll_value() << " Roll again" << std::endl;
        roll = shooter.throw_die(die1, die2);
    }
	std::cout << roll->roll_value() << " start of point phase" << std::endl;
	std::cout << "Roll until " << roll->roll_value() << " or 7 is rolled" << std::endl;

	int point = roll->roll_value();
	roll = shooter.throw_die(die1, die2);
	PointPhase point_phase(point);

	roll= shooter.throw_die(die1, die2);
	while (point_phase.get_outcome(roll) != RollOutcome::point && point_phase.get_outcome(roll) != RollOutcome::seven_out) 
    {
		std::cout << roll->roll_value() << " roll again" << std::endl;
		roll = shooter.throw_die(die1, die2);
	}

	std::cout << roll->roll_value() << " end of point phase" << std::endl;

	std::cout << shooter;

    return 0;
}