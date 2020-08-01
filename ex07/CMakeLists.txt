project(replace)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(replace main.cpp ReplaceMachine.cpp ReplaceMachine.hpp)
