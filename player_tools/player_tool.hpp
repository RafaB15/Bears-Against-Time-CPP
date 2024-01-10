#ifndef __PLAYER_TOOL_HPP__
#define __PLAYER_TOOL_HPP__

#include <string>

class Game; //Forward declaration to avoid circular dependency

class PlayerTool {
    protected:
        int movements;
        std::string representation;
    public:
        //Constructor for a PlayerTool
        PlayerTool(int movements, std::string representation);
        //Destructor
        virtual ~PlayerTool(void);
        //Getter for movements
        int get_movements(void);
        //Getter for representation
        std::string get_representation(void);
        //Use the tool
        virtual void use(Game* game) = 0; //Pure virtual function
};

#endif // __PLAYER_TOOL_HPP__