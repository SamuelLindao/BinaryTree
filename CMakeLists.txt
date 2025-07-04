cmake_minimum_required(VERSION 3.29)
project(BinaryTree C)

set(CMAKE_C_STANDARD 11)

add_library(BinaryTree STATIC library.c
        main.c)
