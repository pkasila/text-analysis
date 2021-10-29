//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/utils.h"

int main(int, char **) {
    if (split_words("I LOVE C++").size() != 3) {
        return -1;
    }

    return 0;
}