# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

## Overview

In this project the error which is used in PID controller is a cross track error (CTE) -- the distance between center of vehicle and center of the track.

Environment provides the following data: CTE, velocity, steering angle.

Proportional part of controller directly accounts the error. Deferential part
helps to reduce oscillations. Integral part sums error over time and allows to overcome biases.


## Implementation

Unfortunately the environment doesn't directly provide timestamps of data, so one way to held this is to use some C++ std capabilities. In this realization `#include <chrono>` is used.

It took several iterations to tune parameters, values from lessons were taken as initial parameters. Final values are the following:
Kp = 0.08,
Ki = 20,
Kd = 0.0001


## Some discussion

Also information about car orientation could be extremely useful. If there would be information about angle between the car longitudional axis and tangent line of track trajectory, it would be possible to create smoother controller.
