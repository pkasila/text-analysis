//
// Created by Ivan Hontarau on 10/29/2021.
//

#include "sentence_length_counter.h"
#include "lengths.h"
#include "vector"
#include "utils.h"

lengths get_sentence_lengths(const std::string &text) {
    std::vector<std::string> sentences = split_sentences(text);
    lengths res{};
    res.max = 0;
    res.min = 99999;
    for (std::string sentence: sentences) {
        res.avg += double(sentence.size());
        if (sentence.size() > res.max) {
            res.max = sentence.size();
        }
        if (sentence.size() < res.min) {
            res.min = sentence.size();
        }
    }
    res.avg /= double(sentences.size());
    return res;
};

#include "sentence_length_counter.h"
