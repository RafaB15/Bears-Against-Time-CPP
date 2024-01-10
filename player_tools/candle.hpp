#ifndef __CANDLE_HPP__
#define __CANDLE_HPP__

#include "player_tool.hpp"
#include "../game.hpp"

class Candle : public PlayerTool {
    public:
        //Constructor for a Candle
        Candle();  
        //Use the tool
        void use(Game* game);
};

#endif // __CANDLE_HPP__
