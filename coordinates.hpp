#ifndef __COORDINATES_HPP__
#define __COORDINATES_HPP__

#include "map_element.hpp"

class Coordinates {
    private:
        int x;
        int y;
    public:
        //Constructor for Coordinate
        Coordinates(int x, int y);
        //Constructor for valid random Coordinate.
        //Receives a map to check if the coordinate is already occupied.
        Coordinates(int max_x, int max_y, MapElement*** map);
        //Getter for x
        int get_x(void);
        //Getter for y
        int get_y(void);
};

#endif // __COORDINATES_HPP__