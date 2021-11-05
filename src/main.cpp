#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>
#include "methods.h"

using namespace std;
namespace fs = filesystem;

int main() {
    vector<string> files = {
            "text1",
            "text2",
            "text3",
            "text4"
    };

    for (const auto &file: files) {
        cout << "* " << file << endl;

        ifstream t("../data/" + file + ".txt");
        stringstream buffer;
        buffer << t.rdbuf();
        string s = buffer.str();
        t.close();

        size_t total_symbols = s.size();

        fs::create_directory("../out/"+file);

        // MARK: - Base stats
        size_t vowels = count_vowels(s);
        size_t consonants = count_consonants(s);
        size_t rare_consonants = count_rare_consonants(s);
        size_t three_vowel_row = three_vowels_in_a_row(s);
        size_t three_by_three_letters = three_by_three_letters_stats(s);
        size_t voiced = count_voiced(s);
        size_t deaf = count_deaf(s);
        size_t words_count = split_words(s).size();
        size_t sentences_count = split_sentences(s).size();

        ofstream o_base("../out/" + file + "/base.csv");

        o_base << "characteristic,number,out_of" << endl;
        o_base << "Vowels," << vowels << "," << total_symbols << endl;
        o_base << "Consonants," << consonants << "," << total_symbols << endl;
        o_base << "Rare consonants," << rare_consonants << "," << total_symbols << endl;
        o_base << "Three vowels in a row," << three_vowel_row << "," << total_symbols << endl;
        o_base << "3-3 letters following," << three_by_three_letters << "," << total_symbols << endl;
        o_base << "Voiced," << voiced << "," << total_symbols << endl;
        o_base << "Deaf," << deaf << "," << total_symbols << endl;
        o_base << "Words count," << words_count << "," << 0 << endl;
        o_base << "Sentences count," << sentences_count << "," << 0 << endl;

        o_base.close();

        // MARK: - Punctuation marks
        map<char, size_t> punctuation_marks = count_punctuation_marks(s);
        ofstream o_punctuation("../out/" + file + "/punctuation.csv");
        o_punctuation << "characteristic,number,out_of" << endl;
        for (const auto&[key, value]: punctuation_marks) {
            if (key == '"') {
                o_punctuation << "quotation_mark," << value << "," << total_symbols << endl;
            } else {
                o_punctuation << "\"" << key << "\"," << value << "," << total_symbols << endl;
            }
        }
        o_punctuation.close();

        // MARK: - Letter deltas
        map<char, delta> letter_deltas = letters_occurrences(s);
        ofstream o_letter_deltas("../out/" + file + "/letter_deltas.csv");
        o_letter_deltas << "letter,number,out_of" << endl;
        for (const auto&[key, value]: letter_deltas) {
            o_letter_deltas << key << "," << value.diff << "," << value.base << endl;
        }
        o_letter_deltas.close();

        // MARK: - Common words
        vector<pair<string, size_t>> common_words = find_common_words(s);
        ofstream o_common_words("../out/" + file + "/common_words.csv");
        o_common_words << "word,number,out_of" << endl;
        for (const auto&[key, value]: common_words) {
            o_common_words << "" << key << "," << value << "," << words_count << endl;
        }
        o_common_words.close();

        // MARK: - Combinations
        map<string, size_t> combinations = count_combinations(s);
        ofstream o_combinations("../out/" + file + "/combinations.csv");
        o_combinations << "combo,number" << endl;
        for (const auto&[key, value]: combinations) {
            o_combinations << "" << key << "," << value << endl;
        }
        o_combinations.close();

        // MARK: - Language means
        fs::create_directory("../out/"+file+"/language_means");

        // conjunctions
        vector<pair<string, size_t>> conjunctions = count_conjunctions(s);
        ofstream o_conjunctions("../out/" + file + "/language_means/conjunctions.csv");
        o_conjunctions << "mean,number,out_of" << endl;
        for (const auto&[key, value]: conjunctions) {
            o_conjunctions << "\"" << key << "\"," << value << "," << words_count << endl;
        }
        o_conjunctions.close();

        // interjections
        vector<pair<string, size_t>> interjections = count_interjections(s);
        ofstream o_interjections("../out/" + file + "/language_means/interjections.csv");
        o_interjections << "mean,number,out_of" << endl;
        for (const auto&[key, value]: interjections) {
            o_interjections << "\"" << key << "\"," << value << "," << words_count << endl;
        }
        o_interjections.close();

        // particles
        vector<pair<string, size_t>> particles = count_particles(s);
        ofstream o_particles("../out/" + file + "/language_means/particles.csv");
        o_particles << "mean,number,out_of" << endl;
        for (const auto&[key, value]: particles) {
            o_particles << "\"" << key << "\"," << value << "," << words_count << endl;
        }
        o_particles.close();

        // prepositions
        vector<pair<string, size_t>> prepositions = count_prepositions(s);
        ofstream o_prepositions("../out/" + file + "/language_means/prepositions.csv");
        o_prepositions << "mean,number,out_of" << endl;
        for (const auto&[key, value]: particles) {
            o_prepositions << "\"" << key << "\"," << value << "," << endl;
        }
        o_prepositions.close();

        // MARK: - Chaining
        chains chaining = get_chaining(s);
        ofstream o_chaining("../out/" + file + "/chaining.csv");
        o_chaining << "chain type,occ" << endl;
        o_chaining << "vowel+vowel," << chaining.vowel_vowel << endl;
        o_chaining << "consonant+consonant," << chaining.consonant_consonant << endl;
        o_chaining << "consonant+vowel," << chaining.consonant_vowel << endl;
        o_chaining << "vowel+consonant," << chaining.vowel_consonant << endl;
        o_chaining.close();

        // MARK: - Lengths
        lengths sentence_length = get_sentence_lengths(s);
        lengths word_length = get_words_lengths(s);
        ofstream o_lengths("../out/" + file + "/lengths.csv");
        o_lengths << "type,min,avg,max" << endl;
        o_lengths << "sentence," << sentence_length.min << "," << sentence_length.avg << "," << sentence_length.max << endl;
        o_lengths << "word," << word_length.min << "," << word_length.avg << "," << word_length.max << endl;
        o_lengths.close();
    }

    return 0;
}
