cmake_minimum_required(VERSION 3.26)
project(practice_fzcode C)

set(CMAKE_C_STANDARD 11)

add_executable(practice_fzcode main.c)

# Create a new executable target for the new file
add_executable(two-dimensional-array two-dimensional-array/two-dimensional-array.c)