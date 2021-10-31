//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/utils.h"
#include <string>

int main(int, char **) {
    // MARK: - split_words
    auto words = split_words("I LOVE C++!");
    if (words.size() != 3) {
        return -1;
    }

    if (words[2] != "C++") {
        return -2;
    }

    // MARK: - split_sentences
    std::vector<std::string> excepted = {"Ufuie fw v, w f rfbum",
                                         "NSA uii usdf fusdh ;",
                                         "sd fn  "};
    std::vector<std::string> res = split_sentences("Ufuie fw v, w f rfbum.NSA uii usdf fusdh ;?sd fn  ");
    if (excepted[0] != res[0] || excepted[1] != res[1] || excepted[2] != res[2]) {
        return -3;
    }
    excepted = {"Î öèóøóè ø, ò",
                "âÛÎÂ  âøãñò, ñò; ğóö ã",
                "óî àò ô "};
    res = split_sentences("Î öèóøóè ø, ò!âÛÎÂ  âøãñò, ñò; ğóö ã?óî àò ô ");
    if (excepted[0] != res[0] || excepted[1] != res[1] || excepted[2] != res[2]) {
        return -3;
    }

    // MARK: - is_vowel
    std::string vowels = "ÀÓÎÛÈİßŞ¨Åàóîûèıÿş¸å";
    for(char c : vowels) {
        if (!is_vowel(c)) {
            return -4;
        }
    }

    return 0;
}