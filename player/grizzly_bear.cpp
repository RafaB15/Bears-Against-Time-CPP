#include "grizzly_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"
#include "../player_tools/candle.hpp"

using namespace Constants;

//Constructor for the Grizzly class
//Receives a map to check if the coordinate is already occupied.
GrizzlyBear::GrizzlyBear() : Player(GRIZZLY_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT_GRIZZLY));
    for(int i = 0; i < INITIAL_CANDLES_AMOUNT; i++) {
        this->tools.push_back(new Candle());
    }
}

//Encounter a tree
void GrizzlyBear::encounter_tree(void) {
    this->lost_time += TIME_LOST_TREE_GRIZZLY;
}