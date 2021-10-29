//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/utils.h"

int main(int, char **) {
    auto words = split_words("I LOVE C++!");
    if (words.size() != 3) {
        return -1;
    }

    if (words[2] != "C++") {
        return -2;
    }

    return 0;
}