cmake_minimum_required(VERSION 3.12)
project(week1 C)

set(CMAKE_C_STANDARD 99)

# Exercises
add_executable(ex1bmi exercises/ex1bmi.c)
add_executable(ex2deg_rad exercises/ex2deg_rad.c)
add_executable(ex3factorial exercises/ex3factorial.c)
add_executable(ex4sum_avg exercises/ex4sum_avg.c)
add_executable(ex5functions exercises/ex5functions.c)
add_executable(ex6fiddling exercises/ex6fiddling.c)
add_executable(ex7practise exercises/ex7practise.c)
add_executable(ex8nim exercises/ex8nim.c)

# Samples
add_executable(io samples/io.c)
add_executable(if_stmt samples/if_stmt.c)
add_executable(while_stmt samples/while_stmt.c)
add_executable(nested_stmt samples/nested_stmt.c)
add_executable(variables samples/variables.c)
add_executable(operators samples/operators.c)
add_executable(c2f samples/c2f.c)
add_executable(random samples/random.c)
add_executable(functions samples/functions.c)

