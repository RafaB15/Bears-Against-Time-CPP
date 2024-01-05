#include "coordinates.hpp"
#include <cstdlib>

//Constructor for Coordinate
Coordinates::Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

//Constructor for valid random Coordinate.
//Receives a map to check if the coordinate is already occupied.
Coordinates::Coordinates(int max_x, int max_y, MapElement*** map) {
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
int Coordinates::get_x(void) {
    return this->x;
}

//Getter for y
int Coordinates::get_y(void) {
    return this->y;
}