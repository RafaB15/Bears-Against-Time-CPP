#ifndef __MAP_OBSTACLE_HPP__
#define __MAP_OBSTACLE_HPP__

#include "../map_element.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class MapObstacle : public MapElement {
    public:
        //Constructor for valid random MapObstacle.
        //Receives a map to check if the coordinate is already occupied.
        MapObstacle(Map map, std::string representation, Coordinates player_coordinates);
};

#endif // __MAP_OBSTACLE_HPP__