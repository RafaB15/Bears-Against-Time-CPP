#include "map_element.hpp"

//Constructor for valid random MapElement.
//Receives a map to check if the coordinate is already occupied.
MapElement::MapElement(MapElement*** map, bool visible = false) : coordinate(map), visible(visible) {}

//Getter for coordinate
Coordinates MapElement::get_coordinates(void) {
    return this->coordinate;
}