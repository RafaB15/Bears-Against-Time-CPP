#include "map_element.hpp"

//Constructor for MapElement
MapElement::MapElement(int x, int y) {
    this->coordinate = Coordinate(x, y);
}

//Constructor for valid random MapElement.
//Receives a map to check if the coordinate is already occupied.
MapElement::MapElement(int max_x, int max_y, MapElement*** map) {
    this->coordinate = Coordinate(max_x, max_y, map);
}

//Getter for coordinate
Coordinate MapElement::get_coordinate(void) {
    return this->coordinate;
}



