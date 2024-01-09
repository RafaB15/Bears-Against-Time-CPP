#include "player.hpp"
#include "../utils.hpp"
#include <cstdlib>

using namespace Constants;

//Constructor for valid random Player.
//Receives a map to check if the coordinate is already occupied.
Player::Player(std::string representation) : representation(representation) {
    int x = std::rand() % ROWS;
    int y = 0;
    
    this->coordinates.x = x;
    this->coordinates.y = y;
    this->lost_time = 0;
    this->last_move = MOVE_RIGHT;
}

//Getter for coordinates
Coordinates Player::get_coordinates(void) {
    return this->coordinates;
}

//Getter for representation
std::string Player::get_map_representation(void) {
    return this->representation;
}

//Getter for lost_time
double Player::get_lost_time(void) {
    return this->lost_time;
}

//Getter for last_move
char Player::get_last_move(void) {
    return this->last_move;
}

//Move up
void Player::move_up(void) {
    if(this->coordinates.x - 1 >= 0) {
        this->coordinates.x--;
    }
    this->last_move = MOVE_UP;
}

//Move down
void Player::move_down(void) {
    if(this->coordinates.x + 1 < ROWS) {
        this->coordinates.x++;
    }
    this->last_move = MOVE_DOWN;
}

//Move left
void Player::move_left(void) {
    if(this->coordinates.y - 1 >= 0) {
        this->coordinates.y--;
    }
    this->last_move = MOVE_LEFT;
}

//Move right
void Player::move_right(void) {
    if(this->coordinates.y + 1 < COLUMNS) {
        this->coordinates.y++;
    }
    this->last_move = MOVE_RIGHT;
}
