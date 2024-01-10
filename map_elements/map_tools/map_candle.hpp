#ifndef __MAP_CANDLE_HPP__
#define __MAP_CANDLE_HPP__

#include "map_tool.hpp"

using namespace TypeDefinitions;

class MapCandle : public MapTool {
    public:
        MapCandle(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __MAP_CANDLE_HPP__