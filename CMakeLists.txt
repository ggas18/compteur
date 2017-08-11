cmake_minimum_required(VERSION 3.5.1)

project (mecsycoLib )

set(PROJECT_VERSION "1.0.0")

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -pedantic -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept    -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Werror -Wno-unused")

file(GLOB SOURCES "src/*.cpp")

add_library(Compteur SHARED ${SOURCES})
