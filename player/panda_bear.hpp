#ifndef __PANDA_BEAR_HPP__
#define __PANDA_BEAR_HPP__

#include <string>

#include "player.hpp"

class PandaBear : public Player {
    public:
        PandaBear(std::string representation);
};

#endif // __PANDA_BEAR_HPP__