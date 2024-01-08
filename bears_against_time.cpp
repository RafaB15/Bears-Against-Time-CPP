#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

#include "personality_test.hpp"
#include "game.hpp"

char get_command(void) {
    std::cout << "Enter a command: ";
    char command;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> command;
    return command;
}

int main(void) {
    std::srand(static_cast<unsigned int>(std::time(0)));

    char personality = personality_test();
    Game game(personality);
    game.print_map();
    
    char command = 0;

    while(!game.is_over()) {
        command = get_command();
        game.play(command);
        game.print_map();
    }
    
}