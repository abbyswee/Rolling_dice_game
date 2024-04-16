cmake_minimum_required(VERSION 3.15)
project(publicRepo)

set(CMAKE_CXX_STANDARD 17)

add_executable(publicRepo_main
        main.cpp
        player_1.h
        player_2.cpp
        player_2.h
        player_1.cpp
        rolling.cpp
        rolling.h)
add_executable(publicRepo_test
        testing.cpp
        player_1.h
        player_2.cpp
        player_2.h
        player_1.cpp
        rolling.cpp
        rolling.h)
