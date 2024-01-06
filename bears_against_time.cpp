#include "bears_against_time.hpp"
#include "coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "map_elements/player/player.hpp"
#include "map_elements/chloe.hpp"
#include "map_elements/map_obstacles/map_obstacle.hpp"
#include "map_elements/map_obstacles/rock.hpp"
#include "map_elements/map_obstacles/tree.hpp"
#include "map_elements/map_obstacles/koala.hpp"

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
    Player* player = new Player(map);
    Coordinates p_coordinates = player->get_coordinates();
    map[p_coordinates.get_x()][p_coordinates.get_y()] = player;
    return p_coordinates;
}

// Receives a Map object and initializes Chloe in a random position
void initialize_chloe(Map map) {
    Chloe* chloe = new Chloe(map);
    Coordinates c_coordinates = chloe->get_coordinates();
    map[c_coordinates.get_x()][c_coordinates.get_y()] = chloe;
}

// Receives a Map object and the amount of obstacles to be initialized 
// and initializes the obstacles in random positions
template <typename T>
void initialize_obstacle(Map map, int amount) {
    for (int i = 0; i < amount; i++) {
        T* obstacle = new T(map);
        Coordinates r_coordinates = obstacle->get_coordinates();
        map[r_coordinates.get_x()][r_coordinates.get_y()] = obstacle;
    }
}

// Receives a Map object and initializes the obstacles in random positions
void initialize_obstacles(Map map) {
    initialize_obstacle<Rock>(map, AMOUNT_ROCKS_MAP);
    initialize_obstacle<Tree>(map, AMOUNT_TREES_MAP);
    initialize_obstacle<Koala>(map, INITIAL_AMOUNT_KOALAS_MAP);    
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