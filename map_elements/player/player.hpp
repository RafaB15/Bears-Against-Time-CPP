#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../map_element.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

const std::string PLAYER_REPRESENTATION = "\U0001F43B";

class Player : public MapElement {
    private:
        double lost_time;
        char last_move;
        MapElement* standing_on;
    public:
        Player(Map map);
};

#endif // __PLAYER_HPP__