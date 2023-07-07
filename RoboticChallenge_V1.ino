#include <LinkedList.h>

// Define junction types
enum class JunctionType {
  EastSouth,
  South,
  SouthWest,
  West,
  WestNorth,
  North,
  NorthEast,
  East,
  Cross
};

// Define junction direction
enum class JunctionDirection {
  None,
  Forward,
  Left,
  Right
};

// Create a struct to represent a junction with its type and actual path
struct Junction {
  JunctionType type;
  JunctionDirection actualPath;
};

// Create a LinkedList to store the junctions
LinkedList<Junction> junctionList;

// Function to capture and add a junction to the list
void captureJunction(JunctionType type, JunctionDirection actualPath) {
  Junction junction;
  junction.type = type;
  junction.actualPath = actualPath;
  junctionList.add(junction);
}

void setup() {
  // Add your setup code here
}

void loop() {
  // Code for the path finder movement and detecting junction types
  // ...

  // Assume the junction type and actual path are determined based on some condition
  JunctionType currentJunctionType = JunctionType::Straight;
  JunctionDirection currentActualPath = JunctionDirection::Forward;

  // Capture the junction and add it to the list
  captureJunction(currentJunctionType, currentActualPath);

  // Continue the path finder movement
  // ...
}