//
// Created by Pavel Kasila on 26.10.21.
//

#include "alphabet_counter.h"

long count_alphabet(const std::string &str, const std::string &alphabet) {
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

long count_vowels(const std::string &str) {
    return count_alphabet(str, "�������ި�����������");
}

long count_consonants(const std::string &str) {
    return count_alphabet(str, "������������������������������������������");
}
