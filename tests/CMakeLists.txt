add_executable(alphabet_test alphabet_test.cpp
        ../src/alphabet_counter.cpp
        ../src/utils.cpp)

add_executable(letter_stats_test letter_stats_test.cpp
        ../src/letter_stats.cpp
        ../src/utils.cpp)

add_executable(utils_test utils_test.cpp
        ../src/utils.cpp)

add_executable(sentence_length_counter_test sentence_length_counter_test.cpp
        ../src/sentence_length_counter.cpp
        ../src/utils.cpp)

add_executable(words_length_counter_test words_length_counter_test.cpp
        ../src/words_length_counter.cpp
        ../src/utils.cpp)

add_executable(prepositions_counter_test prepositions_counter_test.cpp
        ../src/prepositions_counter.cpp
        ../src/utils.cpp
        ../src/words_counter.cpp)
add_executable(conjunctions_counter_test conjunctions_counter_test.cpp
        ../src/conjunctions_counter.cpp
        ../src/utils.cpp
        ../src/words_counter.cpp)

add_executable(interjections_counter_test interjections_counter_test.cpp
        ../src/interjections_counter.cpp
        ../src/utils.cpp
        ../src/words_counter.cpp)

add_executable(particles_counter_test particles_counter_test.cpp
        ../src/particles_counter.cpp
        ../src/utils.cpp
        ../src/words_counter.cpp)

add_executable(common_words_test common_words_test.cpp
        ../src/find_common_words.cpp
        ../src/utils.cpp)

add_executable(combinations_test combinations_test.cpp
        ../src/count_combinations.cpp
        ../src/utils.cpp)

add_executable(three_letters_stats_test three_by_three_letters_stats_test.cpp
        ../src/three_by_three_letters_stats.cpp
        ../src/utils.cpp)

add_executable(three_letters_test three_vowels_in_a_row_test.cpp
        ../src/three_vowels_in_a_row.cpp
        ../src/utils.cpp)

add_executable(chaining_test chaining_test.cpp
        ../src/chaining.cpp
        ../src/utils.cpp)

add_test(AlphabetTest alphabet_test)

add_test(LetterStatsTest letter_stats_test)

add_test(UtilsTest utils_test)

add_test(WordsLengthCounterTest words_length_counter_test)

add_test(SentenceLengthCounterTest sentence_length_counter_test)

add_test(PrepositionsCounterTest prepositions_counter_test)

add_test(ConjunctionsCounterTest conjunctions_counter_test)

add_test(InterjectionsCounterTest interjections_counter_test)

add_test(ParticlesCounterTest particles_counter_test)

add_test(CommonWordsTest common_words_test)

add_test(CombinationsTest combinations_test)

add_test(ThreeLettersTest three_letters_test)

add_test(ThreeLettersStatsTest three_letters_stats_test)

add_test(ChainingTest chaining_test)
