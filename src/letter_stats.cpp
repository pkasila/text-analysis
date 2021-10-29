//
// Created by Pavel Kasila on 29.10.21.
//

#include "letter_stats.h"
#include "utils.h"

std::map<char, double> base_occurrences() {
    return std::map<char, double> {
        {' ', 0.145},
        {'î', 0.095},
        {'å', 0.074},
        {'à', 0.064},
        {'è', 0.064},
        {'ò', 0.056},
        {'í', 0.056},
        {'ñ', 0.047},
        {'ð', 0.041},
        {'â', 0.039},
        {'ë', 0.036},
        {'ê', 0.029},
        {'ì', 0.026},
        {'ä', 0.026},
        {'ï', 0.024},
        {'ó', 0.021},
        {'ÿ', 0.019},
        {'û', 0.016},
        {'ç', 0.015},
        {'ú', 0.015},
        {'ü', 0.015},
        {'á', 0.015},
        {'ã', 0.014},
        {'é', 0.010},
        {'õ', 0.009},
        {'æ', 0.008},
        {'þ', 0.007},
        {'ø', 0.006},
        {'ö', 0.004},
        {'ù', 0.003},
        {'ý', 0.003},
        {'ô', 0.002},
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