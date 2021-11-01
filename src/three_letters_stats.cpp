//
// Created by Demyan Postnikov on 31.10.21.
//

#include "three_letters_stats.h"


std::string glasnye = "àîóûýåèÿþ¸ÀÎÓÛÝÅÈßÞ¨";
std::string soglasnye = "éöêíãøùçõúôâïðëäæ÷ñìòüáÉÖÊÍÃØÙÇÕÚÔÂÏÐËÄÆ×ÑÌÒÜÁ";

bool check_pair(std::string w1, std::string w2){
    int w1l = w1.length();
    int k1 = 0;
    for (int i = w1l-1; i > w1l-4; i--){
        if (glasnye.find_first_of(w1[i]) != std::string::npos){
            k1 ++;
        }
        else{
            break;
        }
    }
    int k2 = 0;
    for (int i = 0; i < 3; i++){
        if (soglasnye.find_first_of(w2[i]) != std::string::npos){
            k2 ++;
        }
        else{
            break;
        }
    }
    return (k1 == 2 || k1 == 3) && (k2 == 2 || k2 == 3);
}

size_t three_letters_stats(const std::string &str){
    std::vector<std::string> words = split_words(str);
    size_t pairs = 0;
    for (int i = 0; i < words.size() - 1; i++){
        if(check_pair(words[i], words[i+1])){
            pairs ++;
        }
    }
    return pairs;
}


