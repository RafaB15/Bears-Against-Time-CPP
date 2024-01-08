#include "map_candle.hpp"
#include "../../utils.hpp"

using namespace Constants;

//Constructor for valid random MapBattery.
//Receives a map to check if the coordinate is already occupied.
MapCandle::MapCandle(Map map) : MapTool(map, CANDLE_REPRESENTATION) {}