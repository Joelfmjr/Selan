cmake_minimum_required(VERSION 3.5)
project(SearchAlgorithms VERSION 0.1 LANGUAGES CXX )

#=== FINDING PACKAGES ===#

# Locate GTest package (library)
#find_package(GTest REQUIRED)
set( GTEST_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/include )
set( GTEST_LIBRARIES ${CMAKE_SOURCE_DIR}/lib/libgtest.a ${CMAKE_SOURCE_DIR}/lib/libgtest_main.a )
# include gtest's include folder in the project
include_directories(${GTEST_INCLUDE_DIRS})

# set the compiling flags
set ( CMAKE_CXX_FLAGS "-Wall" )
# CMAKE_CXX_FLAGS = "-Wall";

#--------------------------------
# This is for old cmake versions
#set (CMAKE_CXX_STANDARD 11)
#--------------------------------

# set the include path
include_directories( include )

# define the sources for the project
# add_executable( driver_search
#                src/app_search.cpp # This has the application main().
#                src/searching.cpp ) # This has the search functions implementation.

# define C++11 standard
# set_property(TARGET driver_search PROPERTY CXX_STANDARD 11)


# Add the test target
add_executable( run_tests
                test/main.cpp )
# Link with the google test libraries.
target_link_libraries( run_tests PRIVATE ${GTEST_LIBRARIES} PRIVATE pthread )

# define C++11 standard
set_property(TARGET run_tests PROPERTY CXX_STANDARD 11)

# The end
