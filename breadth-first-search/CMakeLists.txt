cmake_minimum_required(VERSION 3.29.0)
project(BreadthFirstSearch
        VERSION 0.0.1
        DESCRIPTION "Breadth-First Search in C++"
        LANGUAGES CXX)
add_executable(BreadthFirstSearch src/App.cpp src/Vertex.cpp src/BreadthFirstSearch.cpp)
target_compile_features(BreadthFirstSearch PRIVATE cxx_std_20)