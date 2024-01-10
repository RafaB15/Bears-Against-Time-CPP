#include "candle.hpp"
#include "../utils.hpp"
#include "../player/player.hpp"
#include <cmath>

//Constructor for a Candle
Candle::Candle() : PlayerTool(MOVEMENTS_CANDLE, CANDLE_REPRESENTATION){}

bool is_in_range_candle(Coordinates element_coordinates, Coordinates player_coordinates) {
    return (abs(element_coordinates.x - player_coordinates.x) <= CANDLE_RANGE) && (abs(element_coordinates.y - player_coordinates.y) <= CANDLE_RANGE);
}

//Use the tool
void Candle::use(Game* game) {
    Player* player = game->get_player();
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++){
            if(is_in_range_candle(Coordinates{i, j}, player->get_coordinates())){
                game->set_visibility(Coordinates{i, j}, true);
            }
        }
    }
    this->movements--;
}