#ifndef __PLAYER_TOOL_HPP__
#define __PLAYER_TOOL_HPP__

#include "../game.hpp"

#include <string>

class PlayerTool {
    protected:
        int movements;
        std::string representation;
    public:
        //Constructor for a PlayerTool
        PlayerTool(int movements, std::string representation);
        //Getter for movements
        int get_movements(void);
        //Getter for representation
        std::string get_map_representation(void);
        //Use the tool
        virtual void use(Game* game) = 0; //Pure virtual function
};

#endif // __PLAYER_TOOL_HPP__