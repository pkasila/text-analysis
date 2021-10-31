//
// Created by ab on 31/10/2021.
//

#include "three_letters_in_a_row.h"
#include "utils.h"

size_t three_letters(const std::string &str) {
    int count = 0;
    auto str_size = double(str.size());
    int cur = 0;
    while (cur != str_size) {
        int temp = 0;
        while (is_vowel(str[cur]) == is_vowel(str[cur + temp]) && cur + temp != str_size)
            temp++;
        cur += temp;
        if (temp >= 0)
            count++;
    }
    return count;
}