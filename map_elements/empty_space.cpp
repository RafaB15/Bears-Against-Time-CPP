#include "empty_space.hpp"
#include "../utils.hpp"

using namespace Constants;

//Constructor for valid random EmptySpace.
//Receives a map to check if the coordinate is already occupied.
EmptySpace::EmptySpace(Coordinates coordinates) : MapElement(coordinates, EMPTY_SPACE_REPRESENTATION, false) {}
