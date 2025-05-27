cmake_minimum_required(VERSION 3.30)
project(ThreatSimulation)

set(CMAKE_CXX_STANDARD 26)

add_executable(ThreatSimulation main.cpp
        Target.cpp
        Target.h
        Sensor.cpp
        Sensor.h
        Logger.cpp
        Logger.h)
