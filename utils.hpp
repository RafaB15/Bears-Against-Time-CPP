#ifndef __CONSTANTS_HPP__
#define __CONSTANTS_HPP__

#include <vector>
#include "map_elements/map_element.hpp"

namespace Constants {
    const char TREE  = 'A';
    const char ROCK  = 'R';
    const char KOALA = 'K';

    const char LANTERN   = 'L';
    const char CANDLE    = 'V';
    const char FIREWORKS = 'E';
    const char BATTERY   = 'B';

    const char ICE     = 'I';
    const char GRIZZLY = 'G';
    const char PANDA   = 'P';
    const char CHLOE   = 'C';

    const char MOVE_UP    = 'W';
    const char MOVE_LEFT  = 'A';
    const char MOVE_DOWN  = 'S';
    const char MOVE_RIGHT = 'D';

    const char SEE_TIME = 'T';

    const int INITIAL_CANDLES_AMOUNT          = 4;
    const int INITIAL_CANDLES_AMOUNT_ICE      = 6;
    const int INITIAL_FIREWORKS_AMOUNT_PANDA  = 2;

    const int MOVEMENTS_LANTERN          = 10;
    const int MOVEMENTS_LANTERN_GRIZZLY  = 15;
    const int MOVEMENTS_BATTERY			 = 5;
    const int MOVEMENTS_CANDLE           = 5;
    const int MOVEMENTS_FIREWORKS        = 3;

    const int AMOUNT_TREES_MAP  = 350;
    const int AMOUNT_ROCKS_MAP = 80;

    const int INITIAL_AMOUNT_KOALAS_MAP = 1;

    const int AMOUNT_BATTERIES_MAP = 30;
    const int AMOUNT_CANDLES_MAP   = 30;
    const int AMOUNT_FIREWORKS_MAP = 10;

    const int ROWS    = 20;
    const int COLUMNS = 30;

    const double TIME_LOST_TREE         = 1;
    const double TIME_LOST_TREE_GRIZZLY = 0.5;
    const double TIME_LOST_STONE        = 2;
}

namespace TypeDefinitions {
    typedef std::vector<std::vector<MapElement*>> Map;
}

#endif // __CONSTANTS_HPP__