#ifndef __BEARS_AGAINST_TIME_HPP__
#define __BEARS_AGAINST_TIME_HPP__

#include "map_elements/map_element.hpp"
#include "player_info.hpp"
#include "constants.hpp"

using namespace Constants;

class BearsAgainstTime {
    private:
        MapElement*** map;
        PlayerInfo player_info;
        void populate_map();
        void initialize_map();
    public:
        BearsAgainstTime(char character);
};

#endif // __BEARS_AGAINST_TIME_HPP__