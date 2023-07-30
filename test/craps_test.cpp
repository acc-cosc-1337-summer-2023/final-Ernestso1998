#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include "roll.h"
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Die Value Test")
{
	Die die;

	for(int i=0; i<10; i++)
	{
		die.roll();

		REQUIRE(die.rolled_value()>= 1);
		REQUIRE(die.rolled_value()<= 6);
	}
	
}

TEST_CASE("Roll Value Test")
{
Die die1, die2;
Roll roll(die1, die2);
    for (int i = 0; i < 10; ++i) {
        roll.roll_die();
        int sum = roll.roll_value();
        REQUIRE(sum >= 2);
        REQUIRE(sum <= 12);
    }
}

TEST_CASE("Testing Shooter return a Roll") {
	Shooter shoot;
	Die die1, die2;

	for(int i = 0; i < 10; i++){

		Roll* roll = shoot.throw_die(die1, die2);
		REQUIRE(roll->roll_value() >= 2);
		REQUIRE(roll->roll_value() <= 12);
	}
}

TEST_CASE("ComeOutPhase Test")
{
	Phase_Comeout out;
	Die die1, die2;


	Roll* dieroll = new Roll(die1, die2);

	for (int i = 0; i < 10; ++i) 
	{
		dieroll->roll_die();

		if(dieroll->roll_value() == 7 )
		{
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::natural);
		}
		else if(dieroll->roll_value() == 11)
		{
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::natural);
		}
		else if(dieroll->roll_value() == 2)
		{
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::craps);
		}
		else if(dieroll->roll_value() == 3)
		{
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::craps);
		}
		else if(dieroll->roll_value() == 12)
		{
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::craps);
		}
		else
			REQUIRE(out.get_outcome(dieroll)== RollOutcome::point);
	}
}


TEST_CASE("POINT PHASE")
{
	PointPhase p(4);
	Die die1, die2;


	Roll* diceroll = new Roll(die1, die2);

	for (int i = 0; i < 10; ++i) 
	{
		diceroll->roll_die();

		if(diceroll->roll_value() == 4)
		{
			REQUIRE(p.get_outcome(diceroll) == RollOutcome::point);
		}
		else if(diceroll->roll_value() == 7){
			REQUIRE(p.get_outcome(diceroll) == RollOutcome::seven_out);
		}
		else
		{
			REQUIRE(p.get_outcome(diceroll) == RollOutcome::nopoint);
		}
	}
}