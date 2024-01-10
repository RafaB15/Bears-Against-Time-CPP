#include "map_fireworks.hpp"
#include "../../utils.hpp"
#include "../../player_tools/fireworks.hpp"
#include "../../player/player.hpp"

using namespace Constants;

// Constructor for the MapFireworks class
MapFireworks::MapFireworks(Map map, Coordinates player_coordinates) : MapTool(map, FIREWORKS_REPRESENTATION, player_coordinates) {}

// Affect game
void MapFireworks::affect_game(Game* game) {
    game->get_player()->add_tool(new Fireworks());
}