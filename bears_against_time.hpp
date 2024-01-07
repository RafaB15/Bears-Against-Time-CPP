#ifndef __BEARS_AGAINST_TIME_HPP__
#define __BEARS_AGAINST_TIME_HPP__

#include "map_elements/map_element.hpp"
#include "map_elements/coordinates.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

class BearsAgainstTime {
    private:
        // Matrix of pointers to MapElements
        Map map;
        // Player's coordinates
        Coordinates player_coordinates;
    public:
        // Constructor
        BearsAgainstTime(char character);
        // Prints the map to the screen
        void print_map(void);
};

#endif // __BEARS_AGAINST_TIME_HPP__