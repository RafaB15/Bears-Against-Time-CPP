#include <iostream>
#include <ctime>
#include <cstdlib>

#include "personality_test.hpp"
#include "game.hpp"

int main(void) {
    std::srand(static_cast<unsigned int>(std::time(0)));

    char personality = personality_test();
    std::cout << "Your personality is: " << personality << std::endl;
    Game game(personality);
    game.print_map();
}