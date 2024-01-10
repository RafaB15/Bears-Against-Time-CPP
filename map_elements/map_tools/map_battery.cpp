#include "map_battery.hpp"
#include "../../utils.hpp"
#include "../../player/player.hpp"

using namespace Constants;

//Constructor for valid random MapBattery.
//Receives a map to check if the coordinate is already occupied.
MapBattery::MapBattery(Map map, Coordinates player_coordinates) : MapTool(map, BATTERY_REPRESENTATION, player_coordinates) {}

//Affect game
void MapBattery::affect_game(Game* game) {
    game->get_player()->recharge_flashlight(MOVEMENTS_BATTERY);
}