//
// Created by Ivan Hontarau on 10/31/2021.
//

#include "prepositions_counter.h"
#include "words_counter.h"

std::vector<std::pair<std::string, std::size_t>> count_prepositions(const std::string &text) {
    std::vector<std::string> prepositions = {"без", "ради", "близ", "с", "вне", "среди", "для", "у",
                                             "до", "из-под", "из", "из-за", "кроме", "между", "от", "к",
                                             "по", "про", "сквозь", "через", "в", "за", "на", "о",
                                             "под", "с", "за", "между", "над", "перед"};
    std::vector<std::string> prepositionsUpperCase = {"Без", "Ради", "Близ", "С", "Вне", "Среди", "Для", "У",
                                                      "До", "Из-под", "Из", "Из-за", "Кроме", "Между", "От", "К",
                                                      "По", "Про", "Сквозь", "Через", "В", "За", "На", "О",
                                                      "Под", "С", "За", "Между", "Над", "Перед"
    };
    return count_words_from_list(text, prepositions, prepositionsUpperCase);
}


