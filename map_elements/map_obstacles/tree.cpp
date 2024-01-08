#include "tree.hpp"
#include "../../utils.hpp"

using namespace Constants;

// Constructor for the Tree class
Tree::Tree(Map map, Coordinates player_coordinates) : MapObstacle(map, TREE_REPRESENTATION, player_coordinates) {}