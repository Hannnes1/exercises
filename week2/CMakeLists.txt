cmake_minimum_required(VERSION 3.12)
project(week2 C)

set(CMAKE_C_STANDARD 99)

# Exercises
add_executable(ex1quad exercises/ex1quad.c)
# Link math library
target_link_libraries(ex1quad m)
add_executable(ex2easter exercises/ex2easter.c)
add_executable(ex3series exercises/ex3series.c)
add_executable(ex4puzzlers exercises/ex4puzzlers.c)
add_executable(ex5bit_set exercises/ex5bit_set.c)
add_executable(ex6day_nbr exercises/ex6day_nbr.c)
add_executable(ex7ptr exercises/ex7ptr.c)

# Samples
add_executable(series samples/series.c)
add_executable(bit_operators samples/bit_operators.c)
add_executable(incdec samples/incdec.c)
add_executable(ptr samples/ptr.c)
add_executable(ptr_func samples/ptr_func.c)
add_executable(puzzlers samples/puzzlers.c)
add_executable(math samples/math.c)
target_link_libraries(math m)

