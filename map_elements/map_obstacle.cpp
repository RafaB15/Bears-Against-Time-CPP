#include "map_obstacle.hpp"

//Constructor for valid random MapObstacle.
//Receives a map to check if the coordinate is already occupied.
MapObstacle::MapObstacle(MapElement*** map, bool visible, char type) : MapElement(map, visible), type(type) {}