//
// Created by Pavel Kasila on 26.10.21.
//

#ifndef TEXT_ANALYSIS_ALPHABET_COUNTER_H
#define TEXT_ANALYSIS_ALPHABET_COUNTER_H

#include <string>
#include <map>

size_t count_vowels(const std::string &str);

size_t count_consonants(const std::string &str);

size_t count_rare_consonants(const std::string &str);

std::map<char, size_t> count_punctuation_marks(const std::string &str);

#endif //TEXT_ANALYSIS_ALPHABET_COUNTER_H
