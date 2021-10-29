//
// Created by ab on 29/10/2021.
//

#include "voiced_deaf.h"
#include "utils.h"

size_t count_voiced(const std::string &str) {
    return count_alphabet(str, "БВГДЗЖЛМНРЙбвгдзжлмнрй");
}

size_t count_deaf(const std::string &str) {
    return count_alphabet(str, "ПФКТСШХЦЧЩпфктсшхцчщ");
}