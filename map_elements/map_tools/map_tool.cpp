#include "map_tool.hpp"
#include "../../utils.hpp"

//Constructor for valid random MapTool.
//Receives a map to check if the coordinate is already occupied.
MapTool::MapTool(Map map, std::string representation, Coordinates player_coordinates) : MapElement(map, representation, player_coordinates, true){}