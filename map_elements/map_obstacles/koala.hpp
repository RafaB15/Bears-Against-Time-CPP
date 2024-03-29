#ifndef __KOALA_HPP__
#define __KOALA_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class Koala : public MapObstacle {
    public:
        Koala(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __KOALA_HPP__