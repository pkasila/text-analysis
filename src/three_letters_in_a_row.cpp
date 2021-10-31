//
// Created by ab on 31/10/2021.
//

#include "three_letters_in_a_row.h"
#include "utils.h"

size_t three_letters(const std::string &str){
    int Count = 0;
    auto str_size = double(str.size());
    int Cur = 0;
    while(Cur != str_size){
        int temp = 0;
        while(is_vowel(str[Cur]) == is_vowel(str[Cur+temp]) && Cur+temp != str_size)
            temp++;
        Cur+=temp;
        if(temp>=0)
            Count++;
    }
    return Count;
}