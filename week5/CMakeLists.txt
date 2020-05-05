cmake_minimum_required(VERSION 3.12)
project(week5 C)

set(CMAKE_C_STANDARD 99)

# Exercises
add_executable(ex1pts_tri exercises/ex1pts_tri.c)
# Must link math
target_link_libraries(ex1pts_tri m)
add_executable(ex2dyn_alloc exercises/ex2dyn_allocate.c)

add_executable(ex3linked_list exercises/ex3linked_list.c)
add_executable(ex4bit_module exercises/ex4module/ex4main.c exercises/ex4module/ex4bit_module.c)
add_executable(ex5list_module exercises/ex5module/ex5main.c exercises/ex5module/ex5list_module.c)
add_executable(ex6remdupl_dyn exercises/ex6remdupl_dyn.c)

#Samples
add_executable(use_malloc samples/use_malloc.c)
add_executable(dyn_struct samples/dyn_struct.c)
add_executable(ptr_struct samples/ptr_struct.c)
add_executable(struct samples/struct.c)
add_executable(struct_func samples/struct_func.c)
target_link_libraries(struct_func m)
add_executable(linked_list samples/linked_list.c)
add_executable(linked_list_func samples/linked_list_func.c)

