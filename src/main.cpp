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

    for (const auto &file: files) {
        std::cout << "* " << file << std::endl;

        std::ifstream t(file);
        std::stringstream buffer;
        buffer << t.rdbuf();
        std::string s = buffer.str();

        size_t vowels = count_vowels(s);
        size_t consonants = count_consonants(s);
        size_t rare_consonants = count_rare_consonants(s);
        std::map<char, size_t> punctuation_marks = count_punctuation_marks(s);
        std::map<char, double> letter_deltas = letters_occurrences(s);
        std::vector<std::pair<std::string, size_t>> common_words = find_common_words(s);
        std::map<std::string, size_t> combinations = count_combinations(s);

        size_t all_chars = s.size();

        std::cout << "Vowels: " << vowels << " (" << double(vowels) / double(all_chars) << ")" << std::endl;
        std::cout << "Consonants: " << consonants << " (" << double(consonants) / double(all_chars) << ")" << std::endl;
        std::cout << "Rare Consonants: " << rare_consonants << " (" << double(rare_consonants) / double(all_chars) << ")" << std::endl;

        std::cout << "Punctuation marks:" << std::endl;
        for(const auto& [key, value] : punctuation_marks) {
            std::cout << "- mark '" << key << "' - " << value
            << " (" << double(value) / double(all_chars) << ")" << std::endl;
        }

        std::cout << "Letter statistics:" << std::endl;
        for(const auto& [key, value] : letter_deltas) {
            std::cout << "- letter " << (int)key << " - "
            << value << std::endl;
        }

        std::cout << "Common words:" << std::endl;

        for(const auto& [key, value] : common_words) {
            std::cout << "- word '" << key << "' - "
                      << value << std::endl;
        }

        std::cout << "Combinations:" << std::endl;

        for(const auto& [key, value] : combinations) {
            std::cout << "- combination '" << key << "' - "
                      << value << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
