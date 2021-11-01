//
// Created by Pavel Kasila on 29.10.21.
//

#include "count_combinations.h"
#include "utils.h"

std::vector<std::string> combinations() {
    return {"ст", "но", "ен", "то", "на", "ов", "ни", "ра", "во", "ко", "сто", "ено", "нов", "тов", "ово", "ова"};
}

std::string win2151lctouc(const std::string &str) {
    std::string uc;

    for (char c : str) {
        uc += char(c - 0x20);
    }

    return uc;
}

std::map<std::string, size_t> count_combinations(const std::string &str) {
    std::map<std::string, size_t> m;

    for (const std::string &combo: combinations()) {
        m[combo] = count_substr(str + " ", combo) + count_substr(str + " ", win2151lctouc(combo));
    }

    return m;
}
