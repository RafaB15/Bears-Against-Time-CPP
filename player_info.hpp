#ifndef __PLAYER_INFO_HPP__
#define __PLAYER_INFO_HPP__

#include "map_elements/map_element.hpp"
#include "coordinates.hpp"

class PlayerInfo {
    private:
        Coordinates coordinates;
        char type;
        double lost_time;
        char last_move;
        MapElement* standing_on;
    public:
        PlayerInfo(Map map, char type);
        Coordinates get_coordinates(void);
};

#endif // __PLAYER_INFO_HPP__