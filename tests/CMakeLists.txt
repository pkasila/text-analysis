add_executable(alphabet_test alphabet_test.cpp
        ../src/alphabet_counter.cpp
        ../src/utils.cpp)

add_executable(letter_stats_test letter_stats_test.cpp
        ../src/letter_stats.cpp
        ../src/utils.cpp)

add_executable(utils_test utils_test.cpp
        ../src/utils.cpp)

add_test(AlphabetTest alphabet_test)

add_test(LetterStatsTest letter_stats_test)

add_test(UtilsTest utils_test)