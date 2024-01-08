#ifndef __MAP_FIREWORKS_HPP__
#define __MAP_FIREWORKS_HPP__

#include "map_tool.hpp"

using namespace TypeDefinitions;

class MapFireworks : public MapTool {
    public:
        MapFireworks(Map map, Coordinates player_coordinates);
};

#endif // __MAP_FIREWORKS_HPP__