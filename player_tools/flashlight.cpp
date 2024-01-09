#include "flashlight.hpp"
#include "../utils.hpp"
#include "../player/player.hpp"

using namespace Constants;

//Constructor for the Flashlight class
Flashlight::Flashlight(int movements) : PlayerTool(movements, FLASHLIGHT_REPRESENTATION) {}


//Returns the movements of the Flashlight
int Flashlight::get_movements() {
    return this->movements;
}

//Returns the representation of the Flashlight
std::string Flashlight::get_representation() {
    return FLASHLIGHT_REPRESENTATION;
}

bool is_in_range(Coordinates element_coordinates, Coordinates player_coordinates, char player_last_move) {
    switch(player_last_move){
		case MOVE_UP:
		return ((element_coordinates.y == player_coordinates.y) && (element_coordinates.x < player_coordinates.x));
		break;
		case MOVE_DOWN:
		return ((element_coordinates.y == player_coordinates.y) && (element_coordinates.x > player_coordinates.x));
		break;
		case MOVE_LEFT:
		return ((element_coordinates.y < player_coordinates.y) && (element_coordinates.x == player_coordinates.x));
		break;
		case MOVE_RIGHT:
		return ((element_coordinates.y > player_coordinates.y) && (element_coordinates.x == player_coordinates.x));
		break;
		default:
		return false;
		break;
	}
}

//Use the tool
void Flashlight::use(Game* game) {
    Player* player = game->get_player();
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++){
            if(is_in_range(Coordinates{i, j}, player->get_coordinates(), player->get_last_move())){
                game->set_visibility(Coordinates{i, j}, true);
            }
        }
    }
    this->movements--;
}