#include "player.hpp"

//Constructor for valid random Player.
//Receives a map to check if the coordinate is already occupied.
Player::Player(Map map, char type) : MapElement(map, type, true) {
    this->standing_on = nullptr;
}