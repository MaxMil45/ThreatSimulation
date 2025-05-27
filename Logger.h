#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    static void logToConsole(const std::string& message);
    static void logToFile(const std::string& message, const std::string& filename = "log.txt");
};

#endif // LOGGER_H
