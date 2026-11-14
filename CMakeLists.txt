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
# target_include_directories(MyLib PUBLIC include)


# Add executable target
add_executable(RaylibGameOff src/main.cpp)

# Link library and external dependencies
target_link_libraries(RaylibGameOff PRIVATE raylib raylib_cpp)