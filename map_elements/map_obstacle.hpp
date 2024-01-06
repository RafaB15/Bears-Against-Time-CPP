#ifndef __MAP_OBSTACLE_HPP__
#define __MAP_OBSTACLE_HPP__

#include "map_element.hpp"

class MapObstacle : public MapElement {
    private:
        char type;
    public:
        //Constructor for valid random MapObstacle.
        //Receives a map to check if the coordinate is already occupied.
        MapObstacle(MapElement*** map, bool visible, char type);
};

#endif // __MAP_OBSTACLE_HPP__