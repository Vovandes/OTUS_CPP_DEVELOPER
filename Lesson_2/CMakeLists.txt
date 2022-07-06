cmake_minimum_required(VERSION 3.8)

project(Lesson_2 CXX)

add_executable(Lesson_2 
    "Source.cpp")

target_compile_features(Lesson_2 PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(Lesson_2 PUBLIC /W4 /WX)
else()
    target_compile_options(Lesson_2 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
