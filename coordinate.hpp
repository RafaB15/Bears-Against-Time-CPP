#ifndef __COORDINATE_HPP__
#define __COORDINATE_HPP__

#include "map_element.hpp"

class Coordinate {
    private:
        int x;
        int y;
    public:
        //Default constructor for Coordinate
        Coordinate(void);
        //Constructor for Coordinate
        Coordinate(int x, int y);
        //Constructor for valid random Coordinate.
        //Receives a map to check if the coordinate is already occupied.
        Coordinate(int max_x, int max_y, MapElement*** map);
        //Getter for x
        int get_x(void);
        //Getter for y
        int get_y(void);
};

#endif // __COORDINATE_HPP__