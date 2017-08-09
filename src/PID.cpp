#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double init_Kp, double init_Ki, double init_Kd) {
    //initialize errors
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;

    //initialize coefficients
    Kp = init_Kp;
    Ki = init_Ki;
    Kd = init_Kd;
}

void PID::UpdateError(double cte) {
    p_error = cte;
    
}

double PID::TotalError() {
}
