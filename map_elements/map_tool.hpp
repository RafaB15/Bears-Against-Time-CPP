#ifndef __MAP_TOOL_HPP__
#define __MAP_TOOL_HPP__

#include "map_element.hpp"

class MapTool : public MapElement {
    public:
        MapTool(MapElement*** map, bool visible, char type);
};

#endif // __MAP_TOOL_HPP__