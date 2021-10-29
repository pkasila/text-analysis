//
// Created by Pavel Kasila on 29.10.21.
//

#include <iostream>
#include "../src/count_combinations.h"

int main(int, char **) {
    std::map<std::string, size_t> o = count_combinations(" бв ");

    for (const auto&[key, value]: o) {
        std::cout << "- combo '" << key << "' - "
                  << value << std::endl;
    }

    return 0;
}