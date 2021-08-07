cmake_minimum_required(VERSION 3.12)

project(TextBasedGame)
include_directories(src)

file(GLOB SOURCES "src/*.c")
add_executable(game ${SOURCES})
