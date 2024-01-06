#ifndef __BEARS_AGAINST_TIME_HPP__
#define __BEARS_AGAINST_TIME_HPP__

#include "map_elements/map_element.hpp"
#include "coordinates.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class BearsAgainstTime {
    private:
        Map map;
        Coordinates player_coordinates;
    public:
        BearsAgainstTime(char character);
};

#endif // __BEARS_AGAINST_TIME_HPP__