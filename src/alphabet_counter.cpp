//
// Created by Pavel Kasila on 26.10.21.
//

#include "alphabet_counter.h"

size_t count_alphabet(const std::string &str, const std::string &alphabet) {
    long counter = 0;

    for (char c: str) {
        for (char v: alphabet) {
            if ((int) c == (int) v) {
                counter++;
            }
        }
    }

    return counter;
}

size_t count_vowels(const std::string &str) {
    return count_alphabet(str, "ÀÓÎÛÈİßŞ¨Åàóîûèıÿş¸å");
}

size_t count_consonants(const std::string &str) {
    return count_alphabet(str, "ÁÂÃÄÆÇÉÊËÌÍÏĞÑÒÔÕÖ×ØÙáâãäæçéêëìíïğñòôõö÷øù");
}

size_t count_rare_consonants(const std::string &str) {
    return count_alphabet(str, "ô÷õöùøæÔ×ÕÖÙØÆ");
}

std::map<char, size_t> count_punctuation_marks(const std::string &str) {
    return std::map<char, size_t> {
        {'.', count_alphabet(str, ".")},
        {'!', count_alphabet(str, "!")},
        {'?', count_alphabet(str, "?")},
        {',', count_alphabet(str, ",")},
        {',', count_alphabet(str, ";")},
        {':', count_alphabet(str, ":")},
        {'"', count_alphabet(str, "«»")},
    };
}
