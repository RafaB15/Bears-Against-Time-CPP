#ifndef __TREE_HPP__
#define __TREE_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

const std::string TREE_REPRESENTATION = "\U0001F333";

class Tree : public MapObstacle {
    public:
        Tree(Map map);
};

#endif // __TREE_HPP__