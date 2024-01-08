#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../map_element.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class Player : public MapElement {
    private:
        double lost_time;
        char last_move;
        MapElement* standing_on;
    public:
        //Constructor for a Player with valid coordinates.
        Player(Map map);
        //Getter for lost_time
        double get_lost_time(void);
};  

#endif // __PLAYER_HPP__