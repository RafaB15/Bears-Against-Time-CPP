#ifndef __MAP_TOOL_HPP__
#define __MAP_TOOL_HPP__

#include "../map_element.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class MapTool : public MapElement {
    public:
        MapTool(Map map, std::string representation, Coordinates player_coordinates);
        //Affect game
        virtual void affect_game(Game* game) = 0;
};

#endif // __MAP_TOOL_HPP__