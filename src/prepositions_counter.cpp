//
// Created by Ivan Hontarau on 10/31/2021.
//

#include "prepositions_counter.h"
#include "words_counter.h"

std::vector<std::pair<std::string, std::size_t>> count_prepositions(const std::string &text) {
    std::vector<std::string> prepositions = {"���", "����", "����", "�", "���", "�����", "���", "�",
                                             "��", "��-���", "��", "��-��", "�����", "�����", "��", "�",
                                             "��", "���", "������", "�����", "�", "��", "��", "�",
                                             "���", "�", "��", "�����", "���", "�����"};
    std::vector<std::string> prepositionsUpperCase = {"���", "����", "����", "�", "���", "�����", "���", "�",
                                                      "��", "��-���", "��", "��-��", "�����", "�����", "��", "�",
                                                      "��", "���", "������", "�����", "�", "��", "��", "�",
                                                      "���", "�", "��", "�����", "���", "�����"
    };
    return count_words_from_list(text, prepositions, prepositionsUpperCase);
}


