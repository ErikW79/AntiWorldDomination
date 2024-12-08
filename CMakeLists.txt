# Minimum required CMake version
cmake_minimum_required(VERSION 3.15)

# Project name and version
project(AWD VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source directories
add_subdirectory(src/core)
add_subdirectory(src/privacy)
add_subdirectory(src/consensus)

# Define the main executable
add_executable(awd main.cpp)

# Link the core, privacy, and consensus libraries to the main executable
target_link_libraries(awd PRIVATE core privacy consensus)

# Include directories for headers
target_include_directories(awd PRIVATE src/core src/privacy src/consensus)

# Enable extra compiler warnings
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(awd PRIVATE -Wall -Wextra -Wpedantic)
endif()
