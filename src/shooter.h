#include <iostream>
#include <cstdlib>
#include <vector>
#include "roll.h"


class Shooter
{
public:
	Shooter();

	~Shooter();

	Roll* throw_die(Die& die1, Die& die2);

	friend std::ostream& operator<<(std::ostream& os, const Shooter& shooter);

private:
	std::vector<Roll*> rolls;
};

