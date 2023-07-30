#include <iostream>
#include <cstdlib>
#include "phase.h"


#ifndef PHASE_COMEOUT_H
#define PHASE_COMEOUT_H
class Phase_Comeout : public Phase
{
public:
	virtual RollOutcome get_outcome(Roll* roll) override;
};

#endif