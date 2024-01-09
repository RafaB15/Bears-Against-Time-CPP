#include "game.hpp"
#include "coordinates.hpp"

#include "player/player.hpp"
#include "player/grizzly_bear.hpp"
#include "player/ice_bear.hpp"
#include "player/panda_bear.hpp"

#include "map_elements/map_element.hpp"
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
#include <algorithm>

using namespace Constants;
using namespace TypeDefinitions;

const std::vector<char> valid_commands = {
    MOVE_UP, 
    MOVE_DOWN, 
    MOVE_LEFT, 
    MOVE_RIGHT, 
    ACTIVATE_FLASHLIGHT,
    ACTIVATE_CANDLE,
    ACTIVATE_FIREWORKS,
};

const std::vector<char> move_commands = {
    MOVE_UP, 
    MOVE_DOWN, 
    MOVE_LEFT, 
    MOVE_RIGHT, 
};

const std::vector<char> tool_commands = {
    ACTIVATE_FLASHLIGHT,
    ACTIVATE_CANDLE,
    ACTIVATE_FIREWORKS,
};

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
    switch(character) {
        case PERSONALITY_GRIZZLY:
            return new GrizzlyBear();
            break;
        case PERSONALITY_ICE:
            return new IceBear();
            break;
        default:
            return new PandaBear();
            break;
    }
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
        T* element = new T(map, player_coordinates);
        Coordinates r_coordinates = element->get_coordinates();
        replace_and_free(map, r_coordinates, element);
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
    this->over = false;
    this->map = initialize_map();
    this->player = initialize_player(character);

    Coordinates player_coordinates = this->player->get_coordinates();

    this->chloe= initialize_chloe(this->map, player_coordinates);
    initialize_obstacles(this->map, player_coordinates);
    initialize_tools(this->map, player_coordinates);
}

// Destructor for the Game class
Game::~Game(void) {
    delete this->player;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            delete this->map[i][j];
        }
    }
}

// Prints the map to the screen
void Game::print_map(void) {
    std::cout << "  ";
    std::cout << std::endl;
    for (int i = 0; i < ROWS; i++) {
        std::cout << "  ";
        for (int j = 0; j < COLUMNS; j++) {
            if(this->player->get_coordinates() == Coordinates{i, j}) {
                std::cout << this->player->get_map_representation() << " ";
                continue;
            } 
            std::cout << this->map[i][j]->get_map_representation() << " ";
        }
        std::cout << std::endl;
    }
}

// Returns true if the game is over
bool Game::is_over(void) {
    return this->over;
}

// Gets the player
Player* Game::get_player(void) {
    return this->player;
}

// Returns the time the player lost in the game
double Game::get_time(void) {
    return this->player->get_lost_time();
}

//Makes all the elements in the map invisible
void make_invisible(Map& map){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++){
            map[i][j]->set_visibility(false);
        }
    }
}

//Checks if a command belongs to a vector of commands
bool belongs_to_vector(char command, std::vector<char> vec) {
    return std::find(vec.begin(), vec.end(), command) != vec.end();
}

//Executes a move command
void execute_move_command(Game* game, char command) {
    Player* player = game->get_player();
    switch (command) {
        case MOVE_UP:
            player->move_up();
            break;
        case MOVE_DOWN:
            player->move_down();
            break;
        case MOVE_LEFT:
            player->move_left();
            break;
        case MOVE_RIGHT:
            player->move_right();
            break;
    }
}

//Executes a tool command
void select_tool(Player* player, char command) {
   switch (command) {
        case ACTIVATE_FLASHLIGHT:
            player->select_tool(FLASHLIGHT_REPRESENTATION);
            break;
        case ACTIVATE_CANDLE:
            player->select_tool(CANDLE_REPRESENTATION);
            break;
        case ACTIVATE_FIREWORKS:
            player->select_tool(FIREWORKS_REPRESENTATION);
            break;
    }
}

void execute_tool_action(Game* game, char command) {
    Player* player = game->get_player();
    switch (command) {
        case ACTIVATE_FLASHLIGHT:
            player->use_tool(game);
            break;
        case ACTIVATE_CANDLE:
            player->use_tool(game);
            break;
        case ACTIVATE_FIREWORKS:
            player->use_tool(game);
            break;
    }
}

// Takes a command and changes the game accordingly
void Game::play(char command) {
    if (!belongs_to_vector(command, valid_commands)) {
        std::cout << "Invalid command. Please enter one of the allowed commands: (A, W, S, D, F, C, R, T) " << std::endl;
        return;
    }

    make_invisible(this->map);

    this->player->check_tool_movements();
    
    if (belongs_to_vector(command, move_commands)){
        execute_move_command(this, command);
    } else if (belongs_to_vector(command, tool_commands)){
        select_tool(this->player, command);
    }

    this->player->use_tool(this);
}

// Set the visibility of a map element
void Game::set_visibility(Coordinates coordinates, bool visibility) {
    this->map[coordinates.x][coordinates.y]->set_visibility(visibility);
}

// Ends the game
void Game::end_game(void) {
    this->over = true;
}