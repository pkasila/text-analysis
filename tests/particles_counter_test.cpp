//
// Created by Ivan Hontarau on 11/1/2021.
//

#include "../src/particles_counter.h"
#include <fstream>

int main(int, char **) {

    std::vector<std::pair<std::string, std::size_t>> res = count_particles(
            "Я почти герой. Я ведь герой! Всё же я герой. Вряд ли я герой. Вперед давай побеждай!");

    if (res.size() != 6) {
        return -1;
    }
    for (std::pair p: res) {
        if (p.second != 1) {
            return -2;
        }
    }

    return 0;
}