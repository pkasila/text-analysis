//
// Created by Pavel Kasila on 29.10.21.
//

#ifndef TEXT_ANALYSIS_LETTER_STATS_H
#define TEXT_ANALYSIS_LETTER_STATS_H

#include <map>
#include <string>

struct delta {
    double base;
    double diff;
};

std::map<char, delta> letters_occurrences(const std::string &str);

#endif //TEXT_ANALYSIS_LETTER_STATS_H
