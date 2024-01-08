#ifndef __MAP_TOOL_HPP__
#define __MAP_TOOL_HPP__

#include "../map_element.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class MapTool : public MapElement {
    public:
        MapTool(Map map, std::string representation);
};

#endif // __MAP_TOOL_HPP__