#include "rock.hpp"
#include "../../utils.hpp"

using namespace Constants;

// Constructor for the Rock class
Rock::Rock(Map map, Coordinates player_coordinates) : MapObstacle(map, ROCK_REPRESENTATION, player_coordinates) {}