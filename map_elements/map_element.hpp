#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include <string>

#include "../coordinates.hpp"
#include "../utils.hpp"

using namespace TypeDefinitions;

//Abstract class for all map elements.
class MapElement {
    protected:
        Coordinates coordinates;
        std::string representation;
        bool visible;
    public:
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(Map map, std::string representation, Coordinates player_coordinates, bool visible);
        //Constructor for MapElement in specified coordinates.
        MapElement(Coordinates coordinates, std::string representation, bool visible);
        //Destructor
        virtual ~MapElement(void);
        //Getter for coordinate
        Coordinates get_coordinates(void);
        //Getter for visibility
        bool is_visible(void);
        //Getter for representation
        std::string get_representation(void);
        //Gets the representation of the element in the map
        std::string get_map_representation(void);
};

#endif // __MAP_ELEMENT_HPP__