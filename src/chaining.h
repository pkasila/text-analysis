//
// Created by Pavel Kasila on 2.11.21.
//

#ifndef TEXT_ANALYSIS_CHAINING_H
#define TEXT_ANALYSIS_CHAINING_H

#include <string>

struct chains {
    size_t vowel_vowel;
    size_t vowel_consonant;
    size_t consonant_consonant;
    size_t consonant_vowel;
};

chains get_chaining(const std::string& str);

#endif //TEXT_ANALYSIS_CHAINING_H
