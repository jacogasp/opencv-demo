cmake_minimum_required(VERSION 3.24)
project(opencv_demo)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
# include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(opencv_demo main.cpp)
target_link_libraries(opencv_demo ${OpenCV_LIBS})
