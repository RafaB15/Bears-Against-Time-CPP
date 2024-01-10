#ifndef __ROCK_HPP__
#define __ROCK_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class Rock : public MapObstacle {
    public:
        Rock(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __ROCK_HPP__