cmake_minimum_required(VERSION 3.15)

project(Lesson_3)

add_executable(Lesson_3
        "Source1.cpp")

target_compile_features(Lesson_3 PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(Lesson_3 PUBLIC /W4 /WX)
else()
    target_compile_options(Lesson_3 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()