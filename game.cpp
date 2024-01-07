#include <iostream>

#include "personality_test.hpp"
#include "bears_against_time.hpp"

int main(void) {
    char personality = personality_test();
    std::cout << "Your personality is: " << personality << std::endl;
    BearsAgainstTime game(personality);
}