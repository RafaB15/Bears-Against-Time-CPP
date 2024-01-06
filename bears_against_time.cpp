#include "bears_against_time.hpp"
#include "coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "map_elements/map_obstacle.hpp"
#include "map_elements/map_tool.hpp"

void BearsAgainstTime::initialize_map() {
    this->map = new MapElement**[ROWS];
    for (int i = 0; i < ROWS; i++) {
        (this->map)[i] = new MapElement*[COLUMNS];
        for (int j = 0; j < COLUMNS; j++) {
            (this->map)[i][j] = nullptr;
        }
    }
}

void BearsAgainstTime::populate_map() {
    BearsAgainstTime::initialize_map();
}

BearsAgainstTime::BearsAgainstTime(char character) : player_info(this->map, character) {
    BearsAgainstTime::populate_map();
}