#ifndef __MAP_BATTERY_HPP__
#define __MAP_BATTERY_HPP__

#include "../../utils.hpp"
#include "map_tool.hpp"

using namespace TypeDefinitions;

class MapBattery : public MapTool {
    public:
        MapBattery(Map map);
};

#endif // __MAP_BATTERY_HPP__