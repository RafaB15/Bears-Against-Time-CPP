#include "koala.hpp"
#include "../../utils.hpp"
#include "../../player/player.hpp"

using namespace Constants;

// Constructor for the Koala class
Koala::Koala(Map map, Coordinates player_coordinates) : MapObstacle(map, KOALA_REPRESENTATION, player_coordinates) {}

// Affect game
void Koala::affect_game(Game* game) {
    game->get_player()->encounter_koala(game);
}