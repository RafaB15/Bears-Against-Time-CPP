#include "personality_test.hpp"
#include <iostream>

int main(void) {
    char personality = personality_test();
    std::cout << "Your personality is - " << personality << " -!\n";
}