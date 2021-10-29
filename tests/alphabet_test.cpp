//
// Created by Pavel Kasila on 26.10.21.
//

#include "../src/alphabet_counter.h"

int main(int, char **) {
    if (count_vowels("�������ި�����������") != 20) {
        return -1;
    }

    if (count_consonants("������������������������������������������") != 42) {
        return -2;
    }

    if (count_rare_consonants("��������������") != 14) {
        return -3;
    }

    std::map<char, size_t> marks = count_punctuation_marks(".!?,;:��");

    if (marks['.'] != 1 && marks['!'] != 1 && marks['?'] != 1 && marks[','] != 1 &&
        marks[';'] != 1 && marks[':'] != 1 && marks['"'] != 2) {
        return -4;
    }

    return 0;
}