#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "methods.h"

int main() {
    std::vector<std::string> files = {
            "../data/text1.txt",
            "../data/text2.txt",
            "../data/text3.txt",
            "../data/text4.txt"
    };

    for (const auto& file : files) {
        std::cout << "* " << file << std::endl;

        std::ifstream t(file);
        std::stringstream buffer;
        buffer << t.rdbuf();
        std::string s = buffer.str();

        long vowels = count_vowels(s);
        long consonants = count_consonants(s);

        std::cout << "Vowels: " << vowels << " (" << double(vowels)/double(s.size()) << ")" << std::endl;
        std::cout << "Consonants: " << consonants << " (" << double(consonants)/double(s.size()) << ")" << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
