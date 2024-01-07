#ifndef __MAP_TOOL_HPP__
#define __MAP_TOOL_HPP__

#include "../map_element.hpp"

const std::string MAP_TOOL_REPRESENTATION = "\u1F6E0";

class MapTool : public MapElement {
    public:
        MapTool(Map map, bool visible);
};

#endif // __MAP_TOOL_HPP__