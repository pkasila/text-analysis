//
// Created by Ivan Hontarau on 11/1/2021.
//

#ifndef TEXT_ANALYSIS_WORDS_COUNTER_H
#define TEXT_ANALYSIS_WORDS_COUNTER_H

#include <vector>
#include <utility>
#include <string>

std::vector<std::pair<std::string, std::size_t>>
count_words_from_list(const std::string &text, std::vector<std::string> wordsList,
                      std::vector<std::string> wordsWithCapitalLetterList);

#endif //TEXT_ANALYSIS_WORDS_COUNTER_H
