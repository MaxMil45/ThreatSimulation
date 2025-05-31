#include <vector>
#include <chrono>
#include <thread>
#include "Target.h"
#include "Sensor.h"
#include "Logger.h"

int main() {
    Sensor radar(RADAR, 50, 50, 40); // specify sensor type first

    // position at center of grid
    std::vector<Target> targets = {
        Target(1, 0, 0, true, 0.7, 0.5, 0.3),
        Target(2, 100, 0, false, 0.2, 0.4, 0.6),
        Target(3, 70, 70, true, 0.8, 0.6, 0.1)
    };

    for (int tick = 0; tick < 3; ++tick) {

        // Detect targets with radar
        for (const auto& t : targets) {
            if (radar.detectTarget(t)) {
                Logger::logToConsole(
                    std::string("Target detected by ") +
                    (radar.getType() == RADAR ? "RADAR" :
                     radar.getType() == INFRARED ? "INFRARED" : "ACOUSTIC") +
                    ": " + t.getStatus()
                );
            }
        }


        // Log
        Logger::logToConsole("Tick #" + std::to_string(tick));
        for (const auto& t : targets) {
            Logger::logToConsole(t.getStatus());
        }

        Logger::logToConsole("------------------------");
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}
