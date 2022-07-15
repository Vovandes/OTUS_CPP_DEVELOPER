cmake_minimum_required(VERSION 3.15)

project(CMakeProject3_Game_guess_the_number)

add_executable(CMakeProject3_Game_guess_the_number
        "Source.cpp")

target_compile_features(CMakeProject3_Game_guess_the_number PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(CMakeProject3_Game_guess_the_number PUBLIC /W4 /WX)
else()
    target_compile_options(CMakeProject3_Game_guess_the_number PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
