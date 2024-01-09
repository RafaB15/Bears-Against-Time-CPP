#include "grizzly_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"

using namespace Constants;

//Constructor for the Grizzly class
//Receives a map to check if the coordinate is already occupied.
GrizzlyBear::GrizzlyBear() : Player(GRIZZLY_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT_GRIZZLY));
}

//Encounter a tree
void GrizzlyBear::encounter_tree(void) {
    this->lost_time += TIME_LOST_TREE_GRIZZLY;
}