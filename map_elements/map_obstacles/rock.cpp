#include "rock.hpp"
#include "../../utils.hpp"
#include "../../player/player.hpp"

using namespace Constants;

// Constructor for the Rock class
Rock::Rock(Map map, Coordinates player_coordinates) : MapObstacle(map, ROCK_REPRESENTATION, player_coordinates) {}

// Affect game
void Rock::affect_game(Game* game) {
    game->get_player()->encounter_rock();
}