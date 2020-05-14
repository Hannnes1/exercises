cmake_minimum_required(VERSION 3.12)
project(week6 C)

set(CMAKE_C_STANDARD 99)

# Exercises
add_executable(ex1word_count exercises/ex1word_count.c)
add_executable(ex2str_func exercises/ex2str_func.c)
add_executable(ex3robber_lang exercises/ex3robberlang.c)
add_executable(ex4crypto exercises/ex4crypto/ex4crypto.c)
add_executable(ex5paren_match exercises/ex5paren_match.c)
add_executable(ex6lcr exercises/ex6lcr.c)


#Samples
add_executable(string samples/string.c)
add_executable(string_ptr samples/string_ptr.c)
add_executable(char samples/char.c)
add_executable(string_func samples/string_func.c)
add_executable(use_string_h samples/use_string_h.c)
add_executable(file samples/file/file.c)
add_executable(all_lang samples/all_lang.c)



