#include "panda_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"
#include "../player_tools/candle.hpp"
#include "../player_tools/fireworks.hpp"
using namespace Constants;

//Constructor for the Panda class
PandaBear::PandaBear() : Player(PANDA_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT));
    for(int i = 0; i < INITIAL_CANDLES_AMOUNT; i++) {
        this->tools.push_back(new Candle());
    }
    for (int i = 0; i < INITIAL_FIREWORKS_AMOUNT_PANDA; i++) {
        this->tools.push_back(new Fireworks());
    }
}