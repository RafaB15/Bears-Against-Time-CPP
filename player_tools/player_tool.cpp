#include "player_tool.hpp"

// Constructor for a PlayerTool with valid coordinates.
PlayerTool::PlayerTool(int movements, std::string representation) : movements(movements), representation(representation) {}

// Destructor
PlayerTool::~PlayerTool(void) {}

// Getter for movements
int PlayerTool::get_movements(void) {
    return this->movements;
}

// Getter for representation
std::string PlayerTool::get_representation(void) {
    return this->representation;
}