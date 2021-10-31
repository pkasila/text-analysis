//
// Created by Pavel Kasila on 29.10.21.
//

#include "utils.h"
#include <algorithm>

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

size_t count_char(const std::string &str, char ca) {
    long counter = 0;

    for (char c: str) {
        if ((int) c == (int) ca) {
            counter++;
        }
    }

    return counter;
}

std::vector<std::string> split_words(const std::string &str) {
    std::string text = str + " ";

    std::string marks = ".!?,;:«»";

    std::string space_delimiter = " ";
    std::vector<std::string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != std::string::npos) {
        std::string word = text.substr(0, pos);
        // remove all punctuation marks
        for (char c: marks) {
            word.erase(std::remove(word.begin(), word.end(), c), word.end());
        }
        words.push_back(word);
        text.erase(0, pos + space_delimiter.length());
    }

    return words;
}

std::vector<std::string> split_sentences(const std::string &str) {
    std::string text = str + ".";

    std::string marks = ".!?";

    std::vector<std::string> sentences{};
    std::string sentence;
    for (char c: text) {
        if (marks.find(c) == std::string::npos) {
            sentence += c;
        } else if (!sentence.empty()) {
            sentences.push_back(sentence);
            sentence = "";
        }
    }

    return sentences;
}

size_t count_substr(std::string str, std::string sub) {
    bool in_str;
    size_t co = 0;
    for (int i = 0; i <= str.length() - sub.length(); ++i) {
        in_str = true;
        for (int j = 0; j < sub.length(); ++j) {
            if (str[i + j] != sub[j]) {
                in_str = false;
                break;
            }
        }
        co += in_str;
    }
    return co;
}

bool is_vowel(const char &chr) {
    std::string vowels = "ÀÓÎÛÈÝßÞ¨Åàóîûèýÿþ¸å";
    return vowels.find(chr) != std::string::npos;
}