#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "map_elements/map_element.hpp"
#include "map_elements/coordinates.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class Game {
    private:
        // Matrix of pointers to MapElements
        Map map;
        // Player's coordinates
        Coordinates player_coordinates;
        // Chloe's coordinates
        Coordinates chloe_coordinates;
    public:
        // Constructor
        Game(char character);
        // Prints the map to the screen
        void print_map(void);
};

#endif // __GAME_HPP__