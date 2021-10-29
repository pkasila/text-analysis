//
// Created by Ivan Hontarau on 10/29/2021.
//

#include "words_length_counter.h"
#include "lengths.h"
#include "vector"
#include "utils.h"

lengths get_words_lengths(const std::string &text) {
    std::vector<std::string> words = split_words(text);
    lengths res{};
    res.max = 0;
    res.min = 99999;
    for (const std::string& word: words) {
        res.avg += double(word.size());
        if (word.size() > res.max) {
            res.max = word.size();
        }
        if (word.size() < res.min) {
            res.min = word.size();
        }
    }
    res.avg /= double(words.size());
    return res;
};
