cmake_minimum_required(VERSION 3.16)
project(EulerSim VERSION 0.1 LANGUAGES CXX C)

if("${PROJECT_SOURCE_DIR}" STREQUAL "${PROJECT_BINARY_DIR}")
  message(FATAL_ERROR "Build in sources is not supported by , please use a separate build folder")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML COMPONENTS graphics window system REQUIRED)

set(SOURCES src/container.cpp src/ix.cpp src/options.cpp src/physics.cpp src/sim.cpp src/main.cpp)

add_executable(Euler ${SOURCES})
target_link_libraries(Euler sfml-graphics sfml-window sfml-system)
