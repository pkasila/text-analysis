//
// Created by Pavel Kasila on 29.10.21.
//

#include "letter_stats.h"
#include "utils.h"

std::map<char, double> base_occurrences() {
    return std::map<char, double> {
        {' ', 0.145},
        {'�', 0.095},
        {'�', 0.074},
        {'�', 0.064},
        {'�', 0.064},
        {'�', 0.056},
        {'�', 0.056},
        {'�', 0.047},
        {'�', 0.041},
        {'�', 0.039},
        {'�', 0.036},
        {'�', 0.029},
        {'�', 0.026},
        {'�', 0.026},
        {'�', 0.024},
        {'�', 0.021},
        {'�', 0.019},
        {'�', 0.016},
        {'�', 0.015},
        {'�', 0.015},
        {'�', 0.015},
        {'�', 0.015},
        {'�', 0.014},
        {'�', 0.010},
        {'�', 0.009},
        {'�', 0.008},
        {'�', 0.007},
        {'�', 0.006},
        {'�', 0.004},
        {'�', 0.003},
        {'�', 0.003},
        {'�', 0.002},
    };
}

std::map<char, double> letters_occurrences(const std::string &str) {
    std::map<char, double> base = base_occurrences();
    std::map<char, double> deltas {};
    auto str_size = double(str.size());

    for (const auto& [key, value] : base) {
        deltas[key] = double(count_char(str, key)) / str_size - value;
    }

    return deltas;
}