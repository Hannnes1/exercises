cmake_minimum_required(VERSION 3.12)
project(week4 C)

set(CMAKE_C_STANDARD 99)

# Exercises
add_executable(ex1count_unique exercises/ex1count_unique.c)
add_executable(ex2rotate exercises/ex2rotate.c)
add_executable(ex3remdupl exercises/ex3remdupl.c)
add_executable(ex4median exercises/ex4median.c)
add_executable(ex5common_elems exercises/ex5common_elems.c)
add_executable(ex6unique_rows exercises/ex6unique_rows.c)


# Samples
add_executable(ptr_arr samples/ptr_arr.c)
add_executable(ptr_arr_func samples/ptr_arr_func.c)
add_executable(ptr_matrix samples/ptr_matrix.c)
add_executable(ptr_matrix_func samples/ptr_matrix_func.c)
add_executable(use_mem samples/use_mem.c)


