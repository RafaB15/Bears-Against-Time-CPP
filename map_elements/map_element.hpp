#ifndef __MAP_ELEMENT_HPP__
#define __MAP_ELEMENT_HPP__

#include <string>

#include "../coordinates.hpp"
#include "../utils.hpp"

using namespace TypeDefinitions;

class Game; // Forward declaration of Game class to avoid circular dependency

//Abstract class for all map elements.
class MapElement {
    protected:
        Coordinates coordinates;
        std::string representation;
        bool visible;
        bool pickable;
    public:
        //Constructor for valid random MapElement.
        //Receives a map to check if the coordinate is already occupied.
        MapElement(Map map, std::string representation, Coordinates player_coordinates, bool visible, bool pickable);
        //Constructor for MapElement in specified coordinates.
        MapElement(Coordinates coordinates, std::string representation, bool visible, bool pickable);
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
        // Set the visibility of the element
        void set_visibility(bool visibility);
        // Affect game
        virtual void affect_game(Game* game) = 0;
};

#endif // __MAP_ELEMENT_HPP__