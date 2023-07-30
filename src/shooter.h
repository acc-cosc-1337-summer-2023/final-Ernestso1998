#include <iostream>
#include <cstdlib>
#include <vector>
#include "roll.h"
class Shooter
{
public:
	Roll* throw_die(Die& die1, Die& die2);
	~Shooter();
	friend std::ostream& operator<<(std::ostream& os, const Shooter& shooter);
private:
	std::vector<Roll*> rolls;
};

