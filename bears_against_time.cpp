#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <chrono>

/*
#include <iostream>
#include <chrono>

int main() {
    // Record the start time
    auto start_time = std::chrono::high_resolution_clock::now();

    // Your code here

    // Record the end time
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the duration between start and end
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    // Print the duration in microseconds
    std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;

    return 0;
}

*/

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
    
    auto start_time = std::chrono::high_resolution_clock::now();

    game.print_map();
    
    char command = 0;

    while(!game.is_over()) {
        command = get_command();
        game.play(command);
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