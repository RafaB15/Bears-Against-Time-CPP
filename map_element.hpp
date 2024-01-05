#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include "coordinate.hpp"

class MapElement {
    protected:
        Coordinate coordinate;
    public:
        //Constructor for MapElement
        MapElement(int x, int y);
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(int max_x, int max_y, MapElement*** map);
        //Getter for coordinate
        Coordinate get_coordinate(void);
};

#endif // __MAP_ELEMENT_HPP__