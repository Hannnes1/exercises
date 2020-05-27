cmake_minimum_required(VERSION 3.17)
project(practice_exam C)

set(CMAKE_C_STANDARD 99)

add_executable(q1 q1.c)
add_executable(q2 q2.c)
target_link_libraries(q2 m)
add_executable(q3 q3.c)
add_executable(q4 q4.c)
add_executable(q5 q5.c)
add_executable(q7 q7.c)
add_executable(q8 q8.c)
add_executable(q9 q9.c)