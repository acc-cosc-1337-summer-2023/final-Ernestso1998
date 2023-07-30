#include <iostream>
#include <cstdlib>
class Die
{
public:
    void roll();
    int rolled_value() const;
private:
    int roll_value;
    int sides{6};
};