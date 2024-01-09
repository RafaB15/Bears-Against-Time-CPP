#ifndef __GRIZZLY_BEAR_HPP__
#define __GRIZZLY_BEAR_HPP__

#include "player.hpp"

class GrizzlyBear : public Player {
    public:
        GrizzlyBear(void);
        //Encounter a tree
        void encounter_tree(void);
};

#endif // __GRIZZLY_BEAR_HPP__