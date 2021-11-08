//
// Created by Pavel Kasila on 2.11.21.
//

#include "../src/chaining.h"

int main(int, char **) {
    chains o = get_chaining("отоото");

    if (o.vowel_vowel != 1 || o.vowel_consonant != 2 || o.consonant_consonant != 0) {
        return -1;
    }
    o = get_chaining("тоттот");

    if (o.consonant_consonant != 1 || o.vowel_consonant != 2 || o.consonant_vowel != 2) {
        return -2;
    }

    return 0;
}