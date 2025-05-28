cmake_minimum_required(VERSION 3.31)
project(DrumStudio)

set(CMAKE_CXX_STANDARD 20)

add_executable(DrumStudio src/main.cpp
        src/Drum/Drum.cpp
        src/Throw_except/Throw_except.cpp)

include(FetchContent)

FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG        3.0.0   # Or use a commit hash or branch
)

FetchContent_MakeAvailable(SFML)

target_link_libraries(DrumStudio PRIVATE sfml-graphics sfml-window sfml-system)
