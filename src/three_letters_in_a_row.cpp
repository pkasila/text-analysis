//
// Created by ab on 31/10/2021.
//

#include "three_letters_in_a_row.h"
#include "utils.h"

size_t three_letters(const std::string &str) {
    int count = 0;
    std::vector <std::string> Words = split_words(str);
    for(auto tem_str : Words){
        auto str_size = double(tem_str.size());
        int cur = 0;
        while (cur <= str_size) {
            int temp = 0;
            while (is_vowel(tem_str[cur]) == is_vowel(tem_str[cur + temp]) && cur + temp <= str_size)
                temp++;
            cur += temp;
            if (temp >= 3)
                count++;
        }
    }
    return count;
}