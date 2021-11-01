//
// Created by Ivan Hontarau on 11/1/2021.
//

#include "words_counter.h"
#include "utils.h"
#include <algorithm>

std::vector<std::pair<std::string, std::size_t>>
count_words_from_list(const std::string &text, std::vector<std::string> wordsList,
                      std::vector<std::string> wordsWithCapitalLetterList) {
    std::vector<std::string> words = split_words(text);
    std::vector<std::pair<std::string, std::size_t>> wordsListCount = {};
    bool found;
    for (std::string word: words) {
        if (std::find(wordsWithCapitalLetterList.begin(), wordsWithCapitalLetterList.end(), word) !=
            wordsWithCapitalLetterList.end()) {
            word = wordsList[std::find(wordsWithCapitalLetterList.begin(), wordsWithCapitalLetterList.end(), word) -
                             wordsWithCapitalLetterList.begin()];
        }
        if (std::find(wordsList.begin(), wordsList.end(), word) != wordsList.end()) {
            found = false;
            for (auto & i : wordsListCount) {
                if (i.first == word) {
                    found = true;
                    i.second++;
                }
            }
            if (!found) {
                wordsListCount.emplace_back(word, 1);
            }
        }
    }
    return wordsListCount;
}


