#include "panda_bear.hpp"
#include "../utils.hpp"
#include "../player_tools/flashlight.hpp"
using namespace Constants;

//Constructor for the Panda class
PandaBear::PandaBear() : Player(PANDA_REPRESENTATION) {
    this->tools.push_back(new Flashlight(MOVEMENTS_FLASHLIGHT));
}