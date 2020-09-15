cmake_minimum_required(VERSION 3.10)
project(untitled8)

set(CMAKE_CXX_STANDARD 14)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(my_app main.cpp)
target_link_libraries(my_app Threads::Threads)

if (WIN32)
    add_executable(win_app main.cpp)
endif ()
