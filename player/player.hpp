#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "../coordinates.hpp"
#include <string>

class Player {
    private:
        Coordinates coordinates;
        std::string representation;
        double lost_time;
        char last_move;
    public:
        //Constructor for a Player with valid coordinates.
        Player(void);
        //Getter for coordinates
        Coordinates get_coordinates(void);
        //Getter for representation
        std::string get_representation(void);
        //Getter for lost_time
        double get_lost_time(void);
};  

#endif // __PLAYER_HPP__