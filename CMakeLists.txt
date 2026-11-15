cmake_minimum_required(VERSION 3.15...4.4)
project(RaylibGameOff VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find external packages (e.g., Boost)
# find_package(Boost 1.36.0 COMPONENTS filesystem system REQUIRED)

# Add library target
# add_library(MyLib src/library.cpp)
add_subdirectory(external/raylib)
add_subdirectory(external/raylib-cpp)

# Add executable target
add_executable(RaylibGameOff src/main.cpp
        src/globals.hpp
        src/player.cpp
        src/player.hpp
        src/ColliderDebug.cpp
        src/ColliderDebug.hpp
        src/Enemy.cpp
        src/Enemy.hpp
        src/EnemyBase.cpp
        src/EnemyBase.hpp
        src/Game.cpp
        src/Game.hpp)

target_include_directories(RaylibGameOff PRIVATE
        external/imgui
        external/rlImGui
)

target_sources(RaylibGameOff PRIVATE
        external/imgui/imgui.cpp
        external/imgui/imgui_draw.cpp
        external/imgui/imgui_tables.cpp
        external/imgui/imgui_widgets.cpp
        external/rlImGui/rlImGui.cpp
)
# Link library and external dependencies
target_link_libraries(RaylibGameOff PRIVATE raylib raylib_cpp)