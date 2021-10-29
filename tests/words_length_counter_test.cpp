//
// Created by Ivan Hontarau on 10/29/2021.
//

#include "../src/words_length_counter.h"
int main(int, char **) {
    lengths expected;
    expected.avg = 3;
    expected.max = 5;
    expected.min = 1;
    lengths res = get_words_lengths("Ô êî Îôò óØîâ ÎÔøîâ");
    if(res.avg != expected.avg){
        return -1;
    }else if (res.max != expected.max){
        return -2;
    }else if(res.min != expected.min){
        return -3;
    }
    return 0;
}