#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include "coordinates.hpp"
#include "../utils.hpp"

using namespace TypeDefinitions;

//Abstract class for all map elements.
class MapElement {
    protected:
        Coordinates coordinates;
        bool visible;
    public:
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(Map map, bool visible);
        //Getter for coordinate
        Coordinates get_coordinates(void);
        //Getter for visibility
        bool is_visible(void);
};

#endif // __MAP_ELEMENT_HPP__