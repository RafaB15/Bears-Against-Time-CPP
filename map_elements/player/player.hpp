#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../map_element.hpp"
#include "../../coordinates.hpp"
#include "../../utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class Player : public MapElement {
    private:
        double lost_time;
        char last_move;
        MapElement* standing_on;
    public:
        Player(Map map, char type);
};

#endif // __PLAYER_HPP__