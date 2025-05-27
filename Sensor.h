#ifndef SENSOR_H
#define SENSOR_H

#include "Target.h"
#include <vector>

class Sensor {
public:
    float x, y;
    float detectionRadius;

    Sensor(float x, float y, float radius);

    void detect(std::vector<Target>& targets);
};

#endif // SENSOR_H
