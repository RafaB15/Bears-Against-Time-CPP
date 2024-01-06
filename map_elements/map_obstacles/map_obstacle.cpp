#include "map_obstacle.hpp"

//Constructor for valid random MapObstacle.
//Receives a map to check if the coordinate is already occupied.
MapObstacle::MapObstacle(Map map) : MapElement(map, false){}