#ifndef __EMPTY_SPACE_HPP__
#define __EMPTY_SPACE_HPP__

#include "map_element.hpp"

const std::string EMPTY_SPACE_REPRESENTATION = "\U00002B1C";

class EmptySpace : public MapElement {
    public:
        EmptySpace(Map map);
};

#endif // __EMPTY_SPACE_HPP__