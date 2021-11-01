//
// Created by Ivan Hontarau on 10/31/2021.
//

#include "../src/prepositions_counter.h"

int main(int, char **) {

    std::vector<std::pair<std::string, std::size_t>> res = count_prepositions(
            "На улице пригрело солнце. По дорожкам побежали ручьи.\n"
            " В них малыши запускают бумажные кораблики."
            " Рядом с детьми бежит собака, перепрыгивает через лужи.");

    if (res.size() != 5) {
        return -1;
    }
    for (const std::pair<std::string, std::size_t>& p: res) {
        if (p.second != 1) {
            return -2;
        }
    }
    res = count_prepositions(
            "о На на В в Оо О о о в");
    if (res.size() != 3) {
        return -3;
    }
    if (res[0].second != 4) {
        return -4;
    }
    if (res[1].second != 2) {
        return -5;
    }
    if (res[2].second != 3) {
        return -6;
    }
    if (res[1].first != "на") {
        return -7;
    }

    return 0;
}