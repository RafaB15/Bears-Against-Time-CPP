#include "koala.hpp"
#include "../../utils.hpp"

using namespace Constants;

// Constructor for the Koala class
Koala::Koala(Map map, Coordinates player_coordinates) : MapObstacle(map, KOALA_REPRESENTATION, player_coordinates) {}