#include "game.hpp"
#include "coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "player/player.hpp"
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
Player* initialize_player(char character) {
    return new Player();
}

// Receives a Map object and initializes Chloe in a random position
Chloe* initialize_chloe(Map& map, Coordinates player_coordinates) {
    Chloe* chloe = new Chloe(map, player_coordinates);
    Coordinates c_coordinates = chloe->get_coordinates();
    replace_and_free(map, c_coordinates, chloe);
    return chloe;
}

// Receives a Map object and the amount of obstacles to be initialized 
// and initializes the obstacles in random positions
template <typename T>
void initialize_element(Map& map, Coordinates player_coordinates, int amount) {
    for (int i = 0; i < amount; i++) {
        T* obstacle = new T(map, player_coordinates);
        Coordinates r_coordinates = obstacle->get_coordinates();
        replace_and_free(map, r_coordinates, obstacle);
    }
}

// Receives a Map object and initializes the obstacles in random positions
void initialize_obstacles(Map& map, Coordinates player_coordinates) {
    initialize_element<Rock>(map, player_coordinates, AMOUNT_ROCKS_MAP);
    initialize_element<Tree>(map, player_coordinates, AMOUNT_TREES_MAP);
    initialize_element<Koala>(map, player_coordinates, INITIAL_AMOUNT_KOALAS_MAP);    
}

void initialize_tools(Map& map, Coordinates player_coordinates) {
    initialize_element<MapBattery>(map, player_coordinates, AMOUNT_BATTERIES_MAP);
    initialize_element<MapCandle>(map, player_coordinates, AMOUNT_CANDLES_MAP);
    initialize_element<MapFireworks>(map, player_coordinates, AMOUNT_FIREWORKS_MAP);
}

// Constructor for the Game class
// Receives a character that represents the player and initializes the map
// with all the elements needed for the game
Game::Game(char character) {
    this->map = initialize_map();
    this->player = initialize_player(character);

    Coordinates player_coordinates = this->player->get_coordinates();

    this->chloe= initialize_chloe(this->map, player_coordinates);
    initialize_obstacles(this->map, player_coordinates);
    initialize_tools(this->map, player_coordinates);
}

// Prints the map to the screen
void Game::print_map(void) {
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

// Returns true if the game is over
bool Game::is_over(void) {
    return this->player->get_coordinates() == this->chloe->get_coordinates();
}

// Gets the player
Player* Game::get_player(void) {
    return this->player;
}

// Returns the time the player lost in the game
double Game::get_time(void) {
    return this->player->get_lost_time();
}