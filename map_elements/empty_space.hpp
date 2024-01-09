#ifndef __EMPTY_SPACE_HPP__
#define __EMPTY_SPACE_HPP__

#include "map_element.hpp"

class EmptySpace : public MapElement {
    public:
        //Constructor for valid random EmptySpace.
        EmptySpace(Coordinates coordinates);
        //Affect game
        void affect_game(Game* game);
};

#endif // __EMPTY_SPACE_HPP__