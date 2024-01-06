#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include "../coordinates.hpp"
#include "../utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class MapElement {
    protected:
        Coordinates coordinate;
        bool visible;
    public:
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(Map map, bool visible);
        //Getter for coordinate
        Coordinates get_coordinates(void);
};

#endif // __MAP_ELEMENT_HPP__