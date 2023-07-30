#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Die Value Test")
{
	Die die;

	for(int i=0; i<10; i++)
	{
		REQUIRE(die.rolled_value()> 0);
		REQUIRE(die.rolled_value()<= 6);
	}
	
}

TEST_CASE("Roll Value TEST")
{
	Roll sum;

	


}

