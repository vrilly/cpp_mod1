project(zombie)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(zombie main.cpp Zombie.cpp Zombie.hpp ZombieEvent.cpp ZombieEvent.hpp)