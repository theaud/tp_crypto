cmake_minimum_required(VERSION 3.3)
project(tp_crypto)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bit_tables.cpp bit_tables.h data_messages_examples.h data_tables.h permutations.h permutations.cpp fonction.cpp fonction.h)
add_executable(tp_crypto ${SOURCE_FILES} bit_tables.cpp bit_tables.h)