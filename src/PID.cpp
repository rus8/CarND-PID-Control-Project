#include "PID.h"

//using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double init_Kp, double init_Ki, double init_Kd, long long tick) {
    //initialize errors
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;

    //initialize coefficients
    Kp = init_Kp;
    Ki = init_Ki;
    Kd = init_Kd;

    prev_cte = 0;

    prev_timestamp = tick;
}

void PID::UpdateError(double cte, long long tick) {
    double dt = double(tick - prev_timestamp) / 1000000.0; //convert to secods
    p_error = cte;
    i_error += cte * dt;
    d_error = (cte - prev_cte) / dt;
    prev_cte = cte;
    prev_timestamp = tick;
}

double PID::TotalError() {
    return Kp * p_error + Ki * i_error + Kd * d_error;
}
