#include "map_element.hpp"
#include "../utils.hpp"
#include <cstdlib>

using namespace Constants;

//Constructor for valid random MapElement.
//Receives a map to check if the coordinate is already occupied.
MapElement::MapElement(Map map, std::string representation, bool visible = false) : representation(representation), visible(visible) {
    int x = std::rand() % ROWS;
    int y = std::rand() % COLUMNS;
    while (map[x][y] != nullptr) {
        x = rand() % ROWS;
        y = rand() % COLUMNS;
    }
    this->coordinates.x = x;
    this->coordinates.y = y;
}

//Constructor for MapElement in specified coordinates.
MapElement::MapElement(Coordinates coordinates, std::string representation, bool visible = false) : coordinates(coordinates), representation(representation), visible(visible) {}

//Getter for coordinate
Coordinates MapElement::get_coordinates(void) {
    return this->coordinates;
}

//Getter for visibility
bool MapElement::is_visible(void) {
    return this->visible;
}

//Getter for representation
std::string MapElement::get_representation(void) {
    if (!this->visible) {
        return HIDDEN_TILE_REPRESENTATION;
    }
    return this->representation;
}