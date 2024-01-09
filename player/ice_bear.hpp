#ifndef __ICE_BEAR_HPP__
#define __ICE_BEAR_HPP__

#include <string>

#include "player.hpp"

class IceBear : public Player {
    public:
        IceBear(std::string representation);
};

#endif // __ICE_BEAR_HPP__