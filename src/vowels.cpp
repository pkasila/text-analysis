//
// Created by Pavel Kasila on 26.10.21.
//

#include <algorithm>
#include "vowels.h"

long count_vowels(const std::string& str) {
    long counter = 0;

    std::string VOWELS = "àóîûèıÿş¸å";

    for (char c : str) {
        for (char v : VOWELS) {
            if ((int)c == (int)v) {
                counter++;
            }
        }
    }

    return counter;
}