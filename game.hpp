#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "map_elements/map_element.hpp"
#include "player/player.hpp"
#include "map_elements/chloe.hpp"
#include "coordinates.hpp"
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
        // Destructor
        ~Game(void);
        // Prints the map to the screen
        void print_map(void);
        // Returns true if the game is over
        bool is_over(void);
        // Returns the time the player lost in the game
        double get_time(void);
        // Gets the player
        Player* get_player(void);
        // Takes a command and changes the game accordingly
        void play(char command);
        // Set the visibility of a map element
        void set_visibility(Coordinates coordinates, bool visibility);
};

#endif // __GAME_HPP__