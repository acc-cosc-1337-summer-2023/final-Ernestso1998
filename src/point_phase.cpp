#include <iostream>
#include <cstdlib>
#include "point_phase.h"


RollOutcome PointPhase::get_outcome(Roll* roll){
    if(roll->roll_value() == p){
        return RollOutcome::point;
    }else if(roll->roll_value() == 7){
        return RollOutcome::seven_out;
    }else{
        return RollOutcome::nopoint;
    }
}