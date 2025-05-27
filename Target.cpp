#include "Target.h"
#include <sstream>

Target::Target(int id, float x, float y, float vx, float vy, bool isHostile)
    : id(id), x(x), y(y), vx(vx), vy(vy),
      isHostile(isHostile), detected(false), intercepted(false) {}

void Target::updatePosition(float dt) {
    x += vx * dt;
    y += vy * dt;
}

std::string Target::getStatus() const {
    std::ostringstream oss;
    oss << "ID: " << id
        << " | Pos(" << x << ", " << y << ")"
        << " | Hostile: " << (isHostile ? "Yes" : "No")
        << " | Detected: " << (detected ? "Yes" : "No")
        << " | Intercepted: " << (intercepted ? "Yes" : "No");
    return oss.str();
}
