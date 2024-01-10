#include "ice_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"

using namespace Constants;

//Constructor for the IceBear class
IceBear::IceBear() : Player(ICE_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT));
}

//Encounter a rock
void IceBear::encounter_rock(void) {}