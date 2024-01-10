#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "map_elements/map_element.hpp"
#include "map_elements/chloe.hpp"
#include "coordinates.hpp"
#include "utils.hpp"

class Player; // Forward declaration to avoid circular dependency

using namespace Constants;
using namespace TypeDefinitions;

// Class for the game
class Game {
    private:
        // Matrix of pointers to MapElements
        Map map;
        // Player's coordinates
        Player* player;
        // Chloe's coordinates
        Chloe* chloe;
        // True if the game is over
        bool over;
    public:
        // Constructor
        Game(char character);
        // Destructor
        ~Game(void);
        // Getter for the map
        Map get_map(void);
        // Prints the map to the screen
        void print_map(void);
        // Returns true if the game is over
        bool is_over(void);
        // Ends the game
        void end_game(void);
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