#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
#include "die.h"

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
        int result = roll.roll_value();
        REQUIRE(result >= 2);
        REQUIRE(result <= 12);
    }
}

