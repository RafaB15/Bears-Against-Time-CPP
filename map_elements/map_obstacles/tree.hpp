#ifndef __TREE_HPP__
#define __TREE_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class Tree : public MapObstacle {
    public:
        Tree(Map map, Coordinates player_coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __TREE_HPP__