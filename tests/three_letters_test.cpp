//
// Created by Pavel Kasila on 31.10.21.
//

#include "../src/three_letters_in_a_row.h"
#include <iostream>

int main(int, char **) {
    std::string s = "Привееет!";
    if (three_letters(s) != 1) {
        std::cout << three_letters(s) << std::endl;
        return -1;
    }

    s = "Прииивееет!";
    if (three_letters(s) != 2) {
        std::cout << three_letters(s) << std::endl;
        return -2;
    }

    s = "Жыыывеее Бееелааарууусь!";
    if (three_letters(s) != 5) {
        std::cout << three_letters(s) << std::endl;
        return -3;
    }

    s = "Жыыыыыывеее Бееелааарууусь!";
    if (three_letters(s) != 5) {
        std::cout << three_letters(s) << std::endl;
        return -4;
    }

    return 0;
}