#include <vector>
#include <chrono>
#include <thread>
#include "Target.h"
#include "Sensor.h"
#include "Logger.h"

int main() {
    Sensor radar(50, 50, 40); // position at center of grid
    std::vector<Target> targets = {
        Target(1, 0, 0, 1, 1, true),
        Target(2, 100, 0, -1.5, 0.5, false),
        Target(3, 70, 70, -0.3, -1.1, true)
    };

    for (int tick = 0; tick < 30; ++tick) {
        // Update positions
        for (auto& t : targets) {
            t.updatePosition(1.0f);
        }

        // Detect
        radar.detect(targets);

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
