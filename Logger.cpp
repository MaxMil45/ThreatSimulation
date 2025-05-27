#include "Logger.h"
#include <iostream>
#include <fstream>

void Logger::logToConsole(const std::string& message) {
    std::cout << message << std::endl;
}

void Logger::logToFile(const std::string& message, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        outFile << message << std::endl;
    }
}
