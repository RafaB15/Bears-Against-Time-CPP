#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../coordinates.hpp"
#include "../player_tools/player_tool.hpp"
#include <string>
#include <vector>

class Player {
    protected:
        Coordinates coordinates;
        std::string representation;
        std::vector<PlayerTool*> tools;  
        double lost_time;
        char last_move;
    public:
        //Constructor for a Player with valid coordinates.
        Player(std::string representation);
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
};  

#endif // __PLAYER_HPP__