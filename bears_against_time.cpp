#include "bears_against_time.hpp"
#include "map_elements/coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "map_elements/player/player.hpp"
#include "map_elements/chloe.hpp"
#include "map_elements/empty_space.hpp"
#include "map_elements/map_obstacles/map_obstacle.hpp"
#include "map_elements/map_obstacles/rock.hpp"
#include "map_elements/map_obstacles/tree.hpp"
#include "map_elements/map_obstacles/koala.hpp"
#include "map_elements/map_tools/map_battery.hpp"
#include "map_elements/map_tools/map_candle.hpp"
#include "map_elements/map_tools/map_fireworks.hpp"

#include <iostream>
#include "utils.hpp"

using namespace Constants;
using namespace TypeDefinitions;

// Returns a Map object of size ROWSxCOLUMNS initialized with null pointers
Map initialize_map() {
    Map map(ROWS, std::vector<MapElement*>(COLUMNS));
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            map[i][j] = new EmptySpace({i, j});
        }
    }
    return map;
}

// Receives a Map object, a Coordinates object and a MapElement pointer
// and replaces the element in the map with the new element
// freeing the memory of the old element
void replace_and_free(Map& map, Coordinates coordinates, MapElement* new_element) {
    delete map[coordinates.x][coordinates.y];
    map[coordinates.x][coordinates.y] = new_element;
}

// Receives a Map object and initializes the player in a random position
Coordinates initialize_player(Map& map, char character) {
    Player* player = new Player(map);
    Coordinates p_coordinates = player->get_coordinates();
    replace_and_free(map, p_coordinates, player);
    return p_coordinates;
}

// Receives a Map object and initializes Chloe in a random position
void initialize_chloe(Map& map) {
    std::cout << "Initializing Chloe..." << std::endl;
    Chloe* chloe = new Chloe(map);
    std::cout << "Chloe initialized!" << std::endl;
    Coordinates c_coordinates = chloe->get_coordinates();
    std::cout << "Chloe coordinates: " << c_coordinates.x << ", " << c_coordinates.y << std::endl;
    replace_and_free(map, c_coordinates, chloe);
    std::cout << "Chloe replaced!" << std::endl;
}

// Receives a Map object and the amount of obstacles to be initialized 
// and initializes the obstacles in random positions
template <typename T>
void initialize_element(Map& map, int amount) {
    for (int i = 0; i < amount; i++) {
        T* obstacle = new T(map);
        Coordinates r_coordinates = obstacle->get_coordinates();
        replace_and_free(map, r_coordinates, obstacle);
    }
}

// Receives a Map object and initializes the obstacles in random positions
void initialize_obstacles(Map& map) {
    initialize_element<Rock>(map, AMOUNT_ROCKS_MAP);
    initialize_element<Tree>(map, AMOUNT_TREES_MAP);
    initialize_element<Koala>(map, INITIAL_AMOUNT_KOALAS_MAP);    
}

void initialize_tools(Map& map) {
    initialize_element<MapBattery>(map, AMOUNT_BATTERIES_MAP);
    initialize_element<MapCandle>(map, AMOUNT_CANDLES_MAP);
    initialize_element<MapFireworks>(map, AMOUNT_FIREWORKS_MAP);
}

// Constructor for the BearsAgainstTime class
// Receives a character that represents the player and initializes the map
// with all the elements needed for the game
BearsAgainstTime::BearsAgainstTime(char character) {
    this->map = initialize_map();
    this->player_coordinates = initialize_player(this->map, character);
    initialize_chloe(this->map);
    initialize_obstacles(this->map);
    initialize_tools(this->map);
}

// Prints the map to the screen
void BearsAgainstTime::print_map(void) {
    std::cout << "  ";
    std::cout << std::endl;
    for (int i = 0; i < ROWS; i++) {
        std::cout << "  ";
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << this->map[i][j]->get_representation() << " ";
        }
        std::cout << std::endl;
    }
}