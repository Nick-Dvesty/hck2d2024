cmake_minimum_required(VERSION 3.25)

project(hck2d2024)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE main.cpp)

add_executable(hck2d2024 ${SOURCE})

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLFW_INCLUDE_DIRS} )

target_link_libraries(hck2d2024 ${OPENGL_LIBRARIES} glfw3)