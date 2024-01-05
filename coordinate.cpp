#include "coordinate.hpp"
#include <cstdlib>

//Constructor for Coordinate
Coordinate::Coordinate(int x, int y) {
    this->x = x;
    this->y = y;
}

//Constructor for valid random Coordinate.
//Receives a map to check if the coordinate is already occupied.
Coordinate::Coordinate(int max_x, int max_y, MapElement*** map) {
    int x = std::rand() % max_x;
    int y = std::rand() % max_y;
    while (map[x][y] != nullptr) {
        x = rand() % max_x;
        y = rand() % max_y;
    }
    this->x = x;
    this->y = y;
}

//Getter for x
int Coordinate::get_x(void) {
    return this->x;
}

//Getter for y
int Coordinate::get_y(void) {
    return this->y;
}