project(pony)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(pony Pony.cpp Pony.hpp main.cpp)