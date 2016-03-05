# CMakeLists.txt
# Jaime Portas Garcia
# 24/02/2016

cmake_minimum_required(VERSION 3.3)

project(Project_Euler)


#add_definitions(-std=c++11)

include_directories(${Project_Euler_SOURCE_DIR}/headers)

set(SOURCE_FILES
        source/main.cpp
		source/utils.cpp
        source/problem001.cpp
		source/problem002.cpp
		source/problem003.cpp
		source/problem004.cpp
		source/problem005.cpp
        source/problem006.cpp
		source/problem007.cpp
		source/problem008.cpp
        )

add_executable(Project_Euler ${SOURCE_FILES})