# CMakeList.txt : CMake project for SpaceInvaders, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(SDL2 REQUIRED)
include_directories(SpaceInvaders ${SDL2_INCLUDE_DIRS})

# Add source to this project's executable.
add_executable (SpaceInvaders   "main.cpp" "Game.h" "Game.cpp" "Sprite.h" "Sprite.cpp" "GameObject.h" "GameObject.cpp")
target_link_libraries(SpaceInvaders ${SDL2_LIBRARIES})

# TODO: Add tests and install targets if needed.
