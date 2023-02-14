cmake_minimum_required(VERSION 3.13)
project(yandex-test-contest)
set(CMAKE_CXX_STANDARD 20)

add_compile_options(-Wall -Wextra -pedantic -O2 -fsanitize=address -fno-omit-frame-pointer)
add_link_options(-fsanitize=address -fno-omit-frame-pointer)

add_subdirectory(a-stones-and-jewels)
add_subdirectory(b-ones-sequence)
add_subdirectory(c-remove-duplicates)
add_subdirectory(d-parentheses)
add_subdirectory(e-anagrams)
add_subdirectory(g-interesting-trip)
