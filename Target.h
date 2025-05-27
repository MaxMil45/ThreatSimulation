#ifndef TARGET_H
#define TARGET_H

#include <string>

class Target {
public:
    int id;
    float x, y;        // Position
    float vx, vy;      // Velocity
    bool isHostile;
    bool detected;
    bool intercepted;

    Target(int id, float x, float y, float vx, float vy, bool isHostile);

    void updatePosition(float dt);
    std::string getStatus() const;
};

#endif // TARGET_H
