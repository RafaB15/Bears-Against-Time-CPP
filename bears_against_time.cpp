#include "bears_against_time.hpp"
#include "coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "map_elements/player/player.hpp"
#include "map_elements/player/chloe.hpp"
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

// Returns a Map object of size ROWSxCOLUMNS initialized with null pointers
Map initialize_map() {
    Map map;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            map[i][j] = nullptr;
        }
    }
}

// Receives a Map object and initializes the player in a random position
Coordinates initialize_player(Map map, char character) {
    Player player(map);
    Coordinates p_coordinates = player.get_coordinates();
    map[p_coordinates.get_x()][p_coordinates.get_y()] = &player;
    return p_coordinates;
}

// Receives a Map object and initializes Chloe in a random position
void initialize_chloe(Map map) {
    Chloe chloe(map);
    Coordinates c_coordinates = chloe.get_coordinates();
    map[c_coordinates.get_x()][c_coordinates.get_y()] = &chloe;
}

// Receives a Map object and initializes the obstacles in random positions
void initialize_obstacles(Map map) {
    
}

// Constructor for the BearsAgainstTime class
// Receives a character that represents the player and initializes the map
// with all the elements needed for the game
BearsAgainstTime::BearsAgainstTime(char character) {
    this->map = initialize_map();
    this->player_coordinates = initialize_player(this->map, character);
    initialize_chloe(this->map);
    initialize_obstacles(this->map);
}