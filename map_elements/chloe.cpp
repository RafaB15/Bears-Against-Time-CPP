#include "chloe.hpp"
#include "../utils.hpp"

using namespace Constants;

// Constructor for the Chloe class
Chloe::Chloe(Map map, Coordinates player_coordinates) : MapElement(map, CHLOE_REPRESENTATION, player_coordinates, true) {
    this->found = false;
}