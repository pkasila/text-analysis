//
// Created by Pavel Kasila on 29.10.21.
//

#include "find_common_words.h"
#include "utils.h"

std::map<std::string, size_t> find_common_words(const std::string &str) {
    std::vector<std::string> words = split_words(str);
    std::map<std::string, size_t> m{};

    for (const std::string &s: words) {
        m[s] = m[s] + 1;
    }

    auto cmp = [](std::pair<std::string, size_t> const &a, std::pair<std::string, size_t> const &b) {
        return a.second != b.second ? a.second < b.second : a.first < b.first;
    };
    std::sort(m.begin(), m.end(), cmp);

    return m;
}