cmake_minimum_required(VERSION 3.24)
project(opengltut)

set(CMAKE_CXX_STANDARD 23)
cmake_minimum_required(VERSION 3.10)

project(opengltut)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/include)

# Add libraries
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/lib)
add_executable(opengltut ${SRC_FILES})
# Find and link GLFW library
find_package(glfw3 REQUIRED)
target_link_libraries(opengltut glfw)

# Add source files


# Add header files


# Create executable

target_link_libraries(opengltut ${CMAKE_DL_LIBS})
