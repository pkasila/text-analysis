//
// Created by Pavel Kasila on 1.11.21.
//

#include "../src/three_letters_stats_test.h"

int main(int, char **) {
    size_t o = three_letters_stats("¬ивааа Ћллицей");
    if (o != 1) {
        return -1;
    }

    o = three_letters_stats("∆ывеее Ѕббеларусь!");
    if (o != 1) {
        return -2;
    }

    o = three_letters_stats("∆ывееее Ѕбббеларусь!");
    if (o != 1) {
        return -3;
    }

    return 0;
}
