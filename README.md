Core Enhancements (Weeks 2-3)
 Add multiple sensor types

Different detection radii or capabilities (e.g., radar vs infrared)

 Implement target types or categories

Use an enum for TargetType (e.g., Drone, Missile, Aircraft)

 Add interception logic

Mark targets as intercepted if detected and within interception range

 Introduce target behaviors

Add evasive maneuvers or speed changes for hostile targets

 Improve logging

Add timestamps, log to file, or create a summary report per simulation run

 Add error handling

Validate inputs, check file I/O status, and handle edge cases


User Interaction & Visualization (Week 3-4)
 Basic text-based UI

Display a grid/map with targets and sensors in the console

 Configuration file input

Load initial targets and sensors from a JSON or CSV file

 Add command-line parameters

Allow user to change sensor range, simulation speed, number of targets, etc.

 Create a simple GUI (optional)

Integrate with a C# front-end or use a cross-platform UI like ImGui for real-time display


Testing & Documentation
 Write unit tests for core classes (Target, Sensor, Logger)

 Document your code with comments and create a README explaining the project

 Profile and optimize performance if needed (e.g., handling many targets)

 Add comments explaining your algorithms and design choices
