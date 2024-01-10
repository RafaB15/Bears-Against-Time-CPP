#include "map_candle.hpp"
#include "../../utils.hpp"
#include "../../player_tools/candle.hpp"
#include "../../player/player.hpp"

using namespace Constants;

//Constructor for valid random MapBattery.
//Receives a map to check if the coordinate is already occupied.
MapCandle::MapCandle(Map map, Coordinates player_coordinates) : MapTool(map, CANDLE_REPRESENTATION, player_coordinates) {}

//Affect game
void MapCandle::affect_game(Game* game) {
    //Add candle to player
    game->get_player()->add_tool(new Candle());
}