#ifndef __COORDINATES_HPP__
#define __COORDINATES_HPP__

#include "map_elements/map_element.hpp"
#include "utils.hpp"

using namespace TypeDefinitions;

class Coordinates {
    private:
        int x;
        int y;
    public:
        //Constructor for Coordinate
        Coordinates(int x, int y);
        //Constructor for valid random Coordinate.
        //Receives a map to check if the coordinate is already occupied.
        Coordinates(Map map);
        //Getter for x
        int get_x(void);
        //Getter for y
        int get_y(void);
};

#endif // __COORDINATES_HPP__