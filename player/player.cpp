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
    this->tool_in_use = -1;
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

//Use tool
void Player::use_tool(Game* game) {
    if (this->tool_in_use != -1) {
        this->tools[this->tool_in_use]->use(game);
    }
}

//Checks if the tool currently in use has any movements left
//If it doesn't, it sets the tool_in_use to -1
void Player::check_tool_movements(void) {
    if (this->tool_in_use != -1) {
        if (this->tools[this->tool_in_use]->get_movements() == 0) {
            this->tool_in_use = -1;
        }
    }
}

//Selects a new tool that matches the given representation and changes the tool in use
//If the fireworks are currently selected, it doesn't change the tool in use.
void Player::select_tool(std::string tool_representation) {
    if(this->tool_in_use != -1) {
        if(this->tools[this->tool_in_use]->get_map_representation() == FIREWORKS_REPRESENTATION) {
            return;
        }
    }

    int size = (int) this->tools.size();
    for (int i = 0; i < size; i++) {
        if (this->tools[i]->get_map_representation() == tool_representation && this->tools[i]->get_movements() > 0) {
            if (this->tool_in_use != i) {
                this->tool_in_use = i;
            } else {
                this->tool_in_use = -1;
            }
            return;
        }
    }
}