#include "Sensor.h"
#include "Target.h"
#include <cmath>

Sensor::Sensor(SensorType type, float x, float y, float range)
    : type(type), x(x), y(y), range(range) {}


SensorType Sensor::getType() const {
    return type;
}


bool Sensor::detectTarget(const Target &target) const {

    // Horizontal Distance X
    double dx = target.getX() - x;

    // Vertical Distance Y
    double dy = target.getY() - y;

    double distance = sqrt(dx * dx + dy * dy);

    if (distance < range)
        return false;

    switch (type) {
        case SensorType::RADAR:
            return target.getRadarSignature() > 0.3;
        case SensorType::INFRARED:
            return target.getHeatSignature() > 0.5;
        case SensorType::ACOUSTIC:
            return target.getNoiseLevel() > 0.4;
        default:
            return false;
    }
}
