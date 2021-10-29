//
// Created by Pavel Kasila on 29.10.21.
//

#ifndef TEXT_ANALYSIS_UTILS_H
#define TEXT_ANALYSIS_UTILS_H

#include <string>
#include <map>
#include <vector>

size_t count_alphabet(const std::string &str, const std::string &alphabet);

size_t count_char(const std::string &str, char c);

std::vector<std::string> split_words(const std::string &str);

std::vector<std::string> split_sentences(const std::string &str);

size_t count_substr(std::string str, std::string sub);

#endif //TEXT_ANALYSIS_UTILS_H
