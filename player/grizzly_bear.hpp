#ifndef __GRIZZLY_BEAR_HPP__
#define __GRIZZLY_BEAR_HPP__

#include <string>

#include "player.hpp"

class GrizzlyBear : public Player {
    public:
        GrizzlyBear(std::string representation);
};

#endif // __GRIZZLY_BEAR_HPP__