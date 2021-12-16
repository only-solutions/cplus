cmake_minimum_required(VERSION 3.5)

project(Demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Demo main.cpp addressbook.cpp carplatform.cpp carmodelb.cpp carmodelc.cpp fleetcar.cpp)
