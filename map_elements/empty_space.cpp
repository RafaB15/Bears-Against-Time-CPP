#include "empty_space.hpp"

//Constructor for valid random EmptySpace.
//Receives a map to check if the coordinate is already occupied.
EmptySpace::EmptySpace(Map map) : MapElement(map, EMPTY_SPACE_REPRESENTATION, true) {}