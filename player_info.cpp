#include "player_info.hpp"
#include "utils.hpp"

using namespace Constants;

//Constructor for Player
PlayerInfo::PlayerInfo(MapElement*** map, char type) : coordinates(map), type(type), lost_time(0), last_move(MOVE_RIGHT), standing_on(nullptr){}

//Returns the coordinates of the player
Coordinates PlayerInfo::get_coordinates(void) {
    return this->coordinates;
}