#ifndef __CONSTANTS_HPP__
#define __CONSTANTS_HPP__

#include <vector>
#include <string>

class MapElement; //Forward declaration to avoid circular dependency

namespace TypeDefinitions {
    typedef std::vector<std::vector<MapElement*>> Map;
}

namespace Constants {

    const std::string HIDDEN_TILE_REPRESENTATION = "\U0001F7E9";
    const std::string EMPTY_SPACE_REPRESENTATION = "\U00002B1C";
    const std::string PLAYER_REPRESENTATION = "\U0001F43B";
    const std::string CHLOE_REPRESENTATION = "\U0001F467";
    const std::string KOALA_REPRESENTATION = "\U0001F428";
    const std::string ROCK_REPRESENTATION = "\U0001F5FB";
    const std::string TREE_REPRESENTATION = "\U0001F333";
    const std::string BATTERY_REPRESENTATION = "\U0001F50B";
    const std::string CANDLE_REPRESENTATION = " \U0001F56F";
    const std::string FIREWORKS_REPRESENTATION = "\U0001F9E8";
    
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


#endif // __CONSTANTS_HPP__