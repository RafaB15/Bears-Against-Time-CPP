#ifndef __MAP_TOOL_HPP__
#define __MAP_TOOL_HPP__

#include "../map_element.hpp"

class MapTool : public MapElement {
    public:
        MapTool(Map map, bool visible);
};

#endif // __MAP_TOOL_HPP__