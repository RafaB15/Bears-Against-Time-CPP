#include "bears_against_time.hpp"
#include "coordinates.hpp"
#include "map_elements/map_element.hpp"
#include "map_elements/map_obstacle.hpp"
#include "map_elements/map_tool.hpp"

void BearsAgainstTime::initialize_map() {}

void BearsAgainstTime::populate_map() {
    BearsAgainstTime::initialize_map();
}

BearsAgainstTime::BearsAgainstTime(char character) : player_info(this->map, character) {
    BearsAgainstTime::populate_map();
}