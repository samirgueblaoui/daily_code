cmake_minimum_required(VERSION 3.16)
project(hello_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(programme
    src/main.cpp
    src/exercices.cpp
    src/bibliotheque.cpp
)

target_include_directories(programme PRIVATE include)