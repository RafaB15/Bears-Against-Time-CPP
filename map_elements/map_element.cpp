#include "map_element.hpp"
#include "empty_space.hpp"
#include "../utils.hpp"
#include <cstdlib>

#include <iostream>

#include "../utils.hpp"
using namespace Constants;

//Constructor for valid random MapElement.
//Receives a map to check if the coordinate is already occupied.
MapElement::MapElement(Map map, std::string representation, Coordinates player_coordinates, bool visible, bool pickable) : representation(representation), visible(visible), pickable(pickable){
    int x = std::rand() % ROWS;
    int y = std::rand() % COLUMNS;
    while (map[x][y]->get_representation() != EMPTY_SPACE_REPRESENTATION && (x != player_coordinates.x || y != player_coordinates.y)) {
        x = rand() % ROWS;
        y = rand() % COLUMNS;
    }
    this->coordinates.x = x;
    this->coordinates.y = y;
}

//Constructor for MapElement in specified coordinates.
MapElement::MapElement(Coordinates coordinates, std::string representation, bool visible, bool pickable) : coordinates(coordinates), representation(representation), visible(visible), pickable(pickable) {}

//Destructor
MapElement::~MapElement(void) {}

//Getter for coordinate
Coordinates MapElement::get_coordinates(void) {
    return this->coordinates;
}

//Getter for visibility
bool MapElement::is_visible(void) {
    return this->visible;
}

//Getter for pickable
bool MapElement::is_pickable(void) {
    return this->pickable;
}

//Getter for representation
std::string MapElement::get_representation(void) {
    return this->representation;
}

//Getter for representation
std::string MapElement::get_map_representation(void) {
    if (!this->visible) {
        return HIDDEN_TILE_REPRESENTATION;
    }
    return this->representation;
}

// Set the visibility of the element
void MapElement::set_visibility(bool visibility) {
    this->visible = visibility;
}