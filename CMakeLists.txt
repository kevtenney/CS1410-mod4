cmake_minimum_required(VERSION 3.8)
project(mod4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES counter.cpp)
#set(SOURCE_FILES firstClass.cpp)
#set(SOURCE_FILES distanceClass.cpp)
add_executable(mod4 ${SOURCE_FILES})