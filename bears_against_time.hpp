#ifndef __BEARS_AGAINST_TIME_HPP__
#define __BEARS_AGAINST_TIME_HPP__

#include "map_elements/map_element.hpp"
#include "player_info.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class BearsAgainstTime {
    private:
        Map map;
        PlayerInfo player_info;
        void populate_map();
        void initialize_map();
    public:
        BearsAgainstTime(char character);
};

#endif // __BEARS_AGAINST_TIME_HPP__