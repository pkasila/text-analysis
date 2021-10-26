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

    return 0;
}