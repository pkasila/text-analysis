//
// Created by Ivan Hontarau on 11/1/2021.
//

#include "../src/conjunctions_counter.h"
#include "../src/utils.h"

int main(int, char **) {

    std::vector<std::pair<std::string, std::size_t>> res = count_conjunctions(
            "Она пришла, а он ушел; Он ушел, потому что она пришла; Он устал и ушел; Поскольку она пришла, он ушел.");

    if (res.size() != 4) {
        return -1;
    }
    for (std::pair p: res) {
        if (p.second != 1) {
            return -2;
        }
    }
    res = count_conjunctions(
            "а, абы, Аж, ан, благо, Буде, а, абы, аж, Ан, благо, Буде");
    if (res.size() != 6) {
        return -3;
    }
    for (std::pair p: res) {
        if (p.second != 2) {
            return -4;
        }
    }
    return 0;
}

