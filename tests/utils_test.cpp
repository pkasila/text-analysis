//
// Created by Pavel Kasila on 29.10.21.
//

#include "../src/utils.h"
#include <string>

int main(int, char **) {
    auto words = split_words("I LOVE C++!");
    if (words.size() != 3) {
        return -1;
    }

    if (words[2] != "C++") {
        return -2;
    }


    std::vector<std::string> excepted = {"Ufuie fw v, w f rfbum",
                                         "NSA uii usdf fusdh ;",
                                         "sd fn  "};
    std::vector<std::string> res = split_sentences("Ufuie fw v, w f rfbum.NSA uii usdf fusdh ;?sd fn  ");
    if(excepted[0] != res[0] || excepted[1] != res[1] || excepted[2] != res[2]){
        return -3;
    }
    excepted = {"ќ циушуи ш, т",
                "вџќ¬  вшгст, ст; руц г",
                "уо ат ф "};
    res = split_sentences("ќ циушуи ш, т!вџќ¬  вшгст, ст; руц г?уо ат ф ");
    if(excepted[0] != res[0] || excepted[1] != res[1] || excepted[2] != res[2]){
        return -3;
    }
    return 0;
}