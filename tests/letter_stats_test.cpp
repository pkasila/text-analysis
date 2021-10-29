//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/letter_stats.h"
#include <iostream>

int main(int, char **) {
    std::map<char, double> o = letters_occurrences(" ");
    if (o[' '] != 0.855) {
        return -1;
    }

    return 0;
}