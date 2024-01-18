#include "ice_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"
#include "../player_tools/candle.hpp"

using namespace Constants;

//Constructor for the IceBear class
IceBear::IceBear() : Player(ICE_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT));
    for(int i = 0; i < INITIAL_CANDLES_AMOUNT_ICE; i++) {
        this->tools.push_back(new Candle());
    }
}

//Encounter a rock
void IceBear::encounter_rock(void) {}