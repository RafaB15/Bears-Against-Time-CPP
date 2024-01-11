#ifndef __CONSTANTS_HPP__
#define __CONSTANTS_HPP__

#include <vector>
#include <string>

class MapElement; //Forward declaration to avoid circular dependency

namespace TypeDefinitions {
    typedef std::vector<std::vector<MapElement*>> Map;
}

namespace Constants {

    const char PERSONALITY_GRIZZLY = 'G';
    const char PERSONALITY_PANDA   = 'P';
    const char PERSONALITY_ICE     = 'I';

    const std::string HIDDEN_TILE_REPRESENTATION = "\U0001F7E9";
    const std::string EMPTY_SPACE_REPRESENTATION = "\U00002B1C";

    const std::string GRIZZLY_REPRESENTATION = "\U0001F43B";
    const std::string PANDA_REPRESENTATION = "\U0001F43C";
    const std::string ICE_REPRESENTATION = "\U0001F9CA";

    const std::string CHLOE_REPRESENTATION = "\U0001F467";
    const std::string KOALA_REPRESENTATION = "\U0001F428";
    const std::string ROCK_REPRESENTATION = "\U0001FAA8 ";
    const std::string TREE_REPRESENTATION = "\U0001F333";
    const std::string BATTERY_REPRESENTATION = "\U0001F50B";
    const std::string CANDLE_REPRESENTATION = " \U0001F56F";
    const std::string FIREWORKS_REPRESENTATION = "\U0001F9E8";
    const std::string FLASHLIGHT_REPRESENTATION = "\U0001F526";

    const char MOVE_UP    = 'W';
    const char MOVE_LEFT  = 'A';
    const char MOVE_DOWN  = 'S';
    const char MOVE_RIGHT = 'D';

    const char ACTIVATE_FLASHLIGHT = 'F';
    const char ACTIVATE_CANDLE = 'C';
    const char ACTIVATE_FIREWORKS = 'R';

    const char SEE_TIME = 'T';

    const int INITIAL_CANDLES_AMOUNT          = 4;
    const int INITIAL_CANDLES_AMOUNT_ICE      = 6;
    const int INITIAL_FIREWORKS_AMOUNT_PANDA  = 2;

    const int MOVEMENTS_FLASHLIGHT          = 10;
    const int MOVEMENTS_FLASHLIGHT_GRIZZLY  = 15;
    const int MOVEMENTS_BATTERY			    = 5;
    const int MOVEMENTS_CANDLE              = 5;
    const int MOVEMENTS_FIREWORKS           = 3;

    const int CANDLE_RANGE    = 1;
    const int FIREWORKS_RANGE = 3;

    const int FLASHLIGHT_INDEX = 0;

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
    const double TIME_LOST_ROCK         = 2;
}


#endif // __CONSTANTS_HPP__