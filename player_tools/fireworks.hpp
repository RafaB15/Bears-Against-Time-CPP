#ifndef __FIREWORKS_HPP__
#define __FIREWORKS_HPP__

#include "player_tool.hpp"
#include "../game.hpp"

class Fireworks : public PlayerTool {
    public:
        //Constructor for a Fireworks
        Fireworks();  
        //Use the tool
        void use(Game* game);
};

#endif // __FIREWORKS_HPP__