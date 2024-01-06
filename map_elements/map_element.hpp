#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include "../coordinates.hpp"
#include "../constants.hpp"

using namespace Constants;

class MapElement {
    protected:
        Coordinates coordinate;
        char type;
        bool visible;
    public:
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(MapElement*** map, char type, bool visible);
        //Getter for coordinate
        Coordinates get_coordinates(void);
};

#endif // __MAP_ELEMENT_HPP__