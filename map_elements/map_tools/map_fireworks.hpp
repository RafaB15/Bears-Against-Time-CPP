#ifndef __MAP_FIREWORKS_HPP__
#define __MAP_FIREWORKS_HPP__

#include "map_tool.hpp"

using namespace TypeDefinitions;

class MapFireworks : public MapTool {
    public:
        MapFireworks(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __MAP_FIREWORKS_HPP__