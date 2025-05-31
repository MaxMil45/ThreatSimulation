#ifndef TARGET_H
#define TARGET_H

#include <string>

class Target {
public:
    Target(int id, double x, double y, bool isHostile,
           double radarSignature, double heatSignature, double noiseLevel);

    // Position getters
    double getX() const;
    double getY() const;

    // Signature getters
    double getRadarSignature() const;
    double getHeatSignature() const;
    double getNoiseLevel() const;

    // Optional: get hostility status
    bool getIsHostile() const;

    // Optional: status string for debugging/logging
    std::string getStatus() const;

private:
    int id;
    double x, y;                     // Position
    bool isHostile;

    double radarSignature;           // e.g., 0.0 to 1.0 scale
    double heatSignature;
    double noiseLevel;
};

#endif // TARGET_H
