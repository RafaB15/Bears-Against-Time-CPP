#include "player.hpp"
#include "../utils.hpp"
#include <cstdlib>

using namespace Constants;

//Constructor for valid random Player.
//Receives a map to check if the coordinate is already occupied.
Player::Player(void) {
    int x = std::rand() % ROWS;
    int y = 0;
    
    this->coordinates.x = x;
    this->coordinates.y = y;
    this->representation = PLAYER_REPRESENTATION;
    this->lost_time = 0;
    this->last_move = MOVE_RIGHT;
}

//Getter for coordinates
Coordinates Player::get_coordinates(void) {
    return this->coordinates;
}

//Getter for representation
std::string Player::get_representation(void) {
    return this->representation;
}

//Getter for lost_time
double Player::get_lost_time(void) {
    return this->lost_time;
}