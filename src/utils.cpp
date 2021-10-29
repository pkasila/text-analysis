//
// Created by Pavel Kasila on 29.10.21.
//

#include "utils.h"

size_t count_alphabet(const std::string &str, const std::string &alphabet) {
    long counter = 0;

    for (char c: str) {
        for (char v: alphabet) {
            if ((int) c == (int) v) {
                counter++;
            }
        }
    }

    return counter;
}

size_t count_char(const std::string &str, char ca) {
    long counter = 0;

    for (char c: str) {
        if ((int) c == (int) ca) {
            counter++;
        }
    }

    return counter;
}
