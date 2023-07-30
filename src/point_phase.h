#include "phase.h"


#ifndef PHASE_POINT_H
#define PHASE_POINT_H
class PointPhase : public Phase
{
public:
	PointPhase(int p){};
	virtual RollOutcome get_outcome(Roll* roll) override;

	private:
	int p;
};

#endif