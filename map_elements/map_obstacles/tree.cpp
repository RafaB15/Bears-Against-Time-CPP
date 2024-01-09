#include "tree.hpp"
#include "../../utils.hpp"
#include "../../player/player.hpp"

using namespace Constants;

// Constructor for the Tree class
Tree::Tree(Map map, Coordinates player_coordinates) : MapObstacle(map, TREE_REPRESENTATION, player_coordinates) {}

// Affect game
void Tree::affect_game(Game* game) {
    game->get_player()->encounter_tree();
}