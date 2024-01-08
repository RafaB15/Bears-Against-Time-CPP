#ifndef __EMPTY_SPACE_HPP__
#define __EMPTY_SPACE_HPP__

#include "map_element.hpp"

class EmptySpace : public MapElement {
    public:
        EmptySpace(Coordinates coordinates);
};

#endif // __EMPTY_SPACE_HPP__