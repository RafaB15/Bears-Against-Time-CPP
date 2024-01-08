#ifndef __CHLOE_HPP__
#define __CHLOE_HPP__

#include "map_element.hpp"
#include "../utils.hpp"

using namespace TypeDefinitions;

class Chloe : public MapElement {
    protected:
        bool found;
    public:
        Chloe(Map map, Coordinates player_coordinates);
};

#endif // __CHLOE_HPP__