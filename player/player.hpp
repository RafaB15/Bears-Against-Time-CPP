#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../coordinates.hpp"
#include "../player_tools/player_tool.hpp"
#include "../game.hpp"
#include <string>
#include <vector>

class Player {
    protected:
        Coordinates coordinates;
        std::string representation;
        std::vector<PlayerTool*> tools;  
        int tool_in_use;
        double lost_time;
        char last_move;
    public:
        //Constructor for a Player with valid coordinates.
        Player(std::string representation);
        //Destructor 
        virtual ~Player();
        //Getter for coordinates
        Coordinates get_coordinates(void);
        //Getter for representation
        std::string get_map_representation(void);
        //Getter for lost_time
        double get_lost_time(void);
        //Getter for last_move
        char get_last_move(void);
        //Move up
        void move_up(void);
        //Move down
        void move_down(void);
        //Move left
        void move_left(void);
        //Move right
        void move_right(void);
        //Use tool
        void use_tool(Game* game);
        //Checks if the tool currently in use has any movements left
        //If it doesn't, it sets the tool_in_use to -1
        void check_tool_movements(void);
        //Selects a new tool that matches the given representation and changes the tool in use
        //If the fireworks are currently selected, it doesn't change the tool in use.
        void select_tool(std::string tool_representation);
        //Encounters a tree
        virtual void encounter_tree();
        //Encounters a rock
        virtual void encounter_rock();
        //Encounters a Koala
        void encounter_koala(Game* game);
        //Add tool
        void add_tool(PlayerTool* tool);
        //Gives the flashlight more moves
        void recharge_flashlight(int movements);
};  

#endif // __PLAYER_HPP__