//
// Created by Pavel Kasila on 29.10.21.
//

#include <set>
#include "find_common_words.h"
#include "utils.h"

std::vector<std::pair<std::string, size_t>> find_common_words(const std::string &str) {
    std::vector<std::string> words = split_words(str);
    std::map<std::string, size_t> m{};

    for (const std::string &s: words) {
        m[s] = m[s] + 1;
    }

    // sorting

    std::set<std::pair<int, std::string>> s;
    for (auto const &[k, v] : m)
        s.emplace(v, k);

    std::vector<std::pair<std::string, size_t>> r{};
    r.reserve(s.size());
    for (auto const &[k, v] : s)
            r.emplace_back(std::pair(v, k));

    return {r.rbegin(), r.rend()};
}