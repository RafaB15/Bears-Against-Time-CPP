#include "player.hpp"
#include "../../utils.hpp"

using namespace Constants;

//Constructor for valid random Player.
//Receives a map to check if the coordinate is already occupied.
Player::Player(Map map) : MapElement(map, true) {
    this->lost_time = 0;
    this->standing_on = nullptr;
    this->last_move = MOVE_RIGHT;
}