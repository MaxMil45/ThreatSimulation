#include "Sensor.h"
#include <cmath>

Sensor::Sensor(float x, float y, float radius)
    : x(x), y(y), detectionRadius(radius) {}

void Sensor::detect(std::vector<Target>& targets) {
    for (auto& target : targets) {
        float dx = target.x - x;
        float dy = target.y - y;
        float distance = std::sqrt(dx * dx + dy * dy);

        if (distance <= detectionRadius) {
            target.detected = true;
        }
    }
}
