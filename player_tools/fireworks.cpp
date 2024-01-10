#include "fireworks.hpp"
#include <cmath>

//Constructor for a Fireworks
Fireworks::Fireworks() : PlayerTool(MOVEMENTS_FIREWORKS, FIREWORKS_REPRESENTATION){}

Coordinates get_random_center() {
    int random_x = rand() % ROWS;
    int random_y = rand() % COLUMNS;
    return Coordinates{random_x, random_y};
}

// Return true if the element is in a jacobian distance of less or equal than FIREWORKS_RANGE from the random center
bool is_in_range_firework(Coordinates element_coordinates, Coordinates random_center) {
    return (abs(element_coordinates.x - random_center.x) + (abs(element_coordinates.y - random_center.y)) <= FIREWORKS_RANGE);
}

//Use the tool
void Fireworks::use(Game* game) {
    Coordinates random_center = get_random_center();
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++){
            if(is_in_range_firework(Coordinates{i, j}, random_center)){
                game->set_visibility(Coordinates{i, j}, true);
            }
        }
    }
    this->movements--;
}