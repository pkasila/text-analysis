//
// Created by Pavel Kasila on 26.10.21.
//

#include "../src/alphabet_counter.h"

int main(int, char **) {
    if (count_vowels("ÀÓÎÛÈİßŞ¨Åàóîûèıÿş¸å") != 20) {
        return -1;
    }

    if (count_consonants("ÁÂÃÄÆÇÉÊËÌÍÏĞÑÒÔÕÖ×ØÙáâãäæçéêëìíïğñòôõö÷øù") != 42) {
        return -2;
    }

    if (count_rare_consonants("ô÷õöùøæÔ×ÕÖÙØÆ") != 14) {
        return -3;
    }

    return 0;
}