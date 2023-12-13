cmake_minimum_required(VERSION 3.15)
project(demo VERSION 0.1.0 LANGUAGES CXX)

add_executable(demo 
    src/main.cpp
)

target_include_directories(demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(demo PRIVATE cxx_std_11)