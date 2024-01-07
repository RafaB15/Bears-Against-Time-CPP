#include "map_tool.hpp"

//Constructor for valid random MapTool.
//Receives a map to check if the coordinate is already occupied.
MapTool::MapTool(Map map, bool visible) : MapElement(map, MAP_TOOL_REPRESENTATION, visible){}