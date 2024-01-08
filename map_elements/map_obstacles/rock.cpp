#include "rock.hpp"
#include "../../utils.hpp"

using namespace Constants;

// Constructor for the Rock class
Rock::Rock(Map map) : MapObstacle(map, ROCK_REPRESENTATION) {}