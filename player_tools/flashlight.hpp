#ifndef __FLASHLIGHT_HPP__
#define __FLASHLIGHT_HPP__

#include "player_tool.hpp"
#include "../game.hpp"

class Flashlight : public PlayerTool {
    public:
        //Constructor for a Flashlight
        Flashlight(int movements);    
        //Use the tool
        void use(Game* game);
        //Recharge
        void recharge(int movements);
};

#endif // __FLASHLIGHT_HPP__