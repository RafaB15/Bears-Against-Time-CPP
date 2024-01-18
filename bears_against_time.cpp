#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <chrono>

#include "personality_test/personality_test.hpp"
#include "game.hpp"

//Gets a command from the user
char get_command(void) {
    std::cout << "Enter a command: ";
    char command;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> command;
    return command;
}

//Prints a separation line
void print_separation() {
    std::cout << "\n\n\n\n\n" << "----------------------------------------" << std::endl;
}

int main(void) {
    std::srand(static_cast<unsigned int>(std::time(0)));

    char personality = personality_test();
    print_separation();

    Game game(personality);
    
    auto start_time = std::chrono::high_resolution_clock::now();

    game.print_map();
    
    char command = 0;

    while(!game.is_over()) {
        command = get_command();
        game.play(command);
        print_separation();
        game.print_map();
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time);
    double duration_in_seconds = static_cast<double>(duration.count()) + game.get_time();

    if(duration_in_seconds > 120) {
        std::cout << "You lost! You took too long to finish the game." << std::endl;
    } else {
        std::cout << "You won! You took " << duration_in_seconds << " seconds to finish the game." << std::endl;
    }
}