//
// Created by Ivan Hontarau on 10/29/2021.
//

#include "../src/sentence_length_counter.h"
#include "../src/lengths.h"
int main(int, char **) {

    lengths expected;
    expected.avg = 11.25;
    expected.max = 14;
    expected.min = 9;
    lengths res = get_sentence_lengths("Привет мир. Пока мир. Мир умирает! Боишся смерти?");
    if(res.avg != expected.avg){
        return -1;
    }else if (res.max != expected.max){
        return -2;
    }else if(res.min != expected.min){
        return -3;
    }

    return 0;
}