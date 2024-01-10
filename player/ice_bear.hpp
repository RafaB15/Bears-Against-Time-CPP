#ifndef __ICE_BEAR_HPP__
#define __ICE_BEAR_HPP__

#include "player.hpp"

class IceBear : public Player {
    public:
        IceBear();
        //Encounter a rock
        void encounter_rock(void);
};

#endif // __ICE_BEAR_HPP__