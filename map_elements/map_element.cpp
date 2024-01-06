#include "map_element.hpp"

//Constructor for valid random MapElement.
//Receives a map to check if the coordinate is already occupied.
MapElement::MapElement(MapElement*** map, char type, bool visible = false) : coordinate(map), type(type), visible(visible) {}

//Getter for coordinate
Coordinates MapElement::get_coordinates(void) {
    return this->coordinate;
}