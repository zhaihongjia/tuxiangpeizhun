cmake_minimum_required(VERSION 3.9)
project(imagematch)
set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories()

add_executable(imagematch main.cpp)
target_link_libraries(imagematch ${OpenCV_LIBS})