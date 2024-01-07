#ifndef __ROCK_HPP__
#define __ROCK_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

const std::string ROCK_REPRESENTATION = "\U0001F5FB";

class Rock : public MapObstacle {
    public:
        Rock(Map map);
};

#endif // __ROCK_HPP__