cmake_minimum_required(VERSION 3.29)
project(cesar_cipher LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cesar_cipher src/main.cpp)
