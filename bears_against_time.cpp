#include <iostream>

#include "personality_test.hpp"
#include "game.hpp"

int main(void) {
    char personality = personality_test();
    std::cout << "Your personality is: " << personality << std::endl;
    Game game(personality);
    game.print_map();
}