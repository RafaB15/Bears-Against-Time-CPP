#include "koala.hpp"
#include "../../utils.hpp"

using namespace Constants;

// Constructor for the Koala class
Koala::Koala(Map map) : MapObstacle(map, KOALA_REPRESENTATION) {}