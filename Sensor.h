#ifndef SENSOR_H
#define SENSOR_H

#include "Target.h"
#include <vector>

enum SensorType {
    RADAR,
    INFRARED,
    ACOUSTIC
};

class Target;

class Sensor {
public:

    Sensor(SensorType type, float x,  float y, float range);

    bool detectTarget(const Target& target) const;

    SensorType getType() const;

private:
    SensorType type;
    float x, y;
    float range;
};

#endif // SENSOR_H
