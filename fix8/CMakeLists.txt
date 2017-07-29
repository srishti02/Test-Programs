cmake_minimum_required(VERSION 2.6)

project(FIX8-Client-Server)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

add_subdirectory(client)
add_subdirectory(server)
