cmake_minimum_required(VERSION 3.8)

project(Lesson_4)

add_executable(Lesson_4
        "Source.cpp")

string(REGEX REPLACE "/W3" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

target_compile_features(Lesson_4 PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(Lesson_4 PUBLIC /W4 /WX)
else()
    target_compile_options(Lesson_4 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()