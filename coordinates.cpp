#include "coordinates.hpp"
#include <cstdlib>
#include "constants.hpp"

using namespace Constants;

//Constructor for Coordinate
Coordinates::Coordinates(int x, int y) : x(x), y(y) {}

//Constructor for valid random Coordinate.
//Receives a map to check if the coordinate is already occupied.
Coordinates::Coordinates(MapElement*** map) {
    int x = std::rand() % ROWS;
    int y = std::rand() % COLUMNS;
    while (map[x][y] != nullptr) {
        x = rand() % ROWS;
        y = rand() % COLUMNS;
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