cmake_minimum_required(VERSION 3.5)

project(ch02-copy-assignment LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ch02-copy-assignment main.cpp)

install(TARGETS ch02-copy-assignment
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
