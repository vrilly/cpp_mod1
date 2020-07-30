project(ex05)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(ex05 main.cpp Brain.cpp Brain.hpp Human.cpp Human.hpp)
