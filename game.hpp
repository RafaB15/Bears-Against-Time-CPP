#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "map_elements/map_element.hpp"
#include "map_elements/player/player.hpp"
#include "map_elements/chloe.hpp"
#include "map_elements/coordinates.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class Game {
    private:
        // Matrix of pointers to MapElements
        Map map;
        // Player's coordinates
        Player* player;
        // Chloe's coordinates
        Chloe* chloe;
    public:
        // Constructor
        Game(char character);
        // Prints the map to the screen
        void print_map(void);
        // Returns true if the game is over
        bool is_over(void);
        // Returns the time the player lost in the game
        double get_time(void);
        // Gets the player
        Player* get_player(void);
};

#endif // __GAME_HPP__