//
// Created by Pavel Kasila on 26.10.21.
//

#include "alphabet_counter.h"
#include "utils.h"

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
        {'.', count_char(str, '.')},
        {'!', count_char(str, '!')},
        {'?', count_char(str, '?')},
        {',', count_char(str, ',')},
        {';', count_char(str, ';')},
        {':', count_char(str, ':')},
        {'"', count_char(str, '«') + count_char(str, '»')},
    };
}
