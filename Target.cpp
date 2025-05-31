#include "Target.h"
#include <sstream>

Target::Target(int id, double x, double y, bool isHostile,
               double radarSignature, double heatSignature, double noiseLevel)
    : id(id), x(x), y(y), isHostile(isHostile),
      radarSignature(radarSignature), heatSignature(heatSignature), noiseLevel(noiseLevel) {}

double Target::getX() const { return x; }
double Target::getY() const { return y; }
double Target::getRadarSignature() const { return radarSignature; }
double Target::getHeatSignature() const { return heatSignature; }
double Target::getNoiseLevel() const { return noiseLevel; }
bool Target::getIsHostile() const { return isHostile; }

std::string Target::getStatus() const {
    std::ostringstream oss;
    oss << "ID: " << id
        << " | Pos(" << x << ", " << y << ")"
        << " | Hostile: " << (isHostile ? "Yes" : "No")
        << " | RadarSig: " << radarSignature
        << " | HeatSig: " << heatSignature
        << " | NoiseLevel: " << noiseLevel;
    return oss.str();
}
