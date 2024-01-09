#ifndef __FLASHLIGHT_HPP__
#define __FLASHLIGHT_HPP__

#include "player_tool.hpp"
#include "../game.hpp"

class Flashlight : public PlayerTool {
    public:
        //Constructor for a Flashlight
        Flashlight(int movements);
        //Getter for movements
        int get_movements(void);
        //Getter for representation
        std::string get_representation(void);        
        //Use the tool
        void use(Game* game);
};

#endif // __FLASHLIGHT_HPP__