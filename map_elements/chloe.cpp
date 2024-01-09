#include "chloe.hpp"
#include "../utils.hpp"

using namespace Constants;

// Constructor for the Chloe class
Chloe::Chloe(Map map, Coordinates player_coordinates) : MapElement(map, CHLOE_REPRESENTATION, player_coordinates, false, false) {
    this->found = false;
}

// Affect game
void Chloe::affect_game(Game* game) {
    game->end_game();
}