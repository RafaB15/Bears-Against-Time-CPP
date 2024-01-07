#ifndef __CHLOE_HPP__
#define __CHLOE_HPP__

#include "map_element.hpp"
#include "../utils.hpp"

using namespace TypeDefinitions;

const std::string CHLOE_REPRESENTATION = "\U0001F467";

class Chloe : public MapElement {
    public:
        Chloe(Map map);
};

#endif // __CHLOE_HPP__