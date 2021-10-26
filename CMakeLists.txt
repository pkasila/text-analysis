cmake_minimum_required(VERSION 3.20)
project(text_analysis)

set(CMAKE_CXX_STANDARD 23)

file(GLOB text_analysis_SRC "src/*.h" "src/*.cpp")
add_executable(text_analysis ${text_analysis_SRC})
set_property(TARGET text_analysis PROPERTY ENABLE_EXPORTS 1)

enable_testing()
add_subdirectory(tests)