//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/find_common_words.h"
#include <iostream>
#include <vector>

int main(int, char **) {
    std::vector<std::pair<std::string, size_t>> o = find_common_words("I LOVE WORLD! LOVE WORLD!");

    for(const auto& [key, value] : o) {
        std::cout << "- word '" << key << "' - "
                  << value << std::endl;
    }

    return 0;
}