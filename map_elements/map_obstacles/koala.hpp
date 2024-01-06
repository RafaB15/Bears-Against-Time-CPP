#ifndef __KOALA_HPP__
#define __KOALA_HPP__

#include "map_obstacle.hpp"
#include "../../utils.hpp"

using namespace TypeDefinitions;

class Koala : public MapObstacle {
    public:
        Koala(Map map);
};

#endif // __KOALA_HPP__