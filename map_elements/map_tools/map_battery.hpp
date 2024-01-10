#ifndef __MAP_BATTERY_HPP__
#define __MAP_BATTERY_HPP__

#include "map_tool.hpp"

using namespace TypeDefinitions;

class MapBattery : public MapTool {
    public:
        MapBattery(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __MAP_BATTERY_HPP__