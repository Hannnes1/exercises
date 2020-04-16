cmake_minimum_required(VERSION 3.12)
project(week3 C)

set(CMAKE_C_STANDARD 99)

#Exercises
add_executable(ex1sum_to exercises/ex1sum_to.c)
add_executable(ex2sum_arr exercises/ex2sum_arr.c)
add_executable(ex3arr_func exercises/ex3arr_func.c)
# Must link math
target_link_libraries(ex3arr_func m)
add_executable(ex4matrix exercises/ex4matrix.c)
add_executable(ex5matrix_func exercises/ex5matrix_func.c)
add_executable(ex6common_seq exercises/ex6common_seq.c)

# Samples
add_executable(arrays samples/arrays.c)
add_executable(arr_func samples/arr_func.c)
add_executable(for_stmt samples/for_stmt.c)
add_executable(matrix samples/matrix.c)
add_executable(matrix_func samples/matrix_func.c)
add_executable(enum samples/enum.c)

