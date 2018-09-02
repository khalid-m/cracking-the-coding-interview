cmake_minimum_required(VERSION 2.8.2)

project(cracking_the_coding_interview)

set(CMAKE_CXX_FLSGS "${CMAKE_CXX_FLSGS} -std=c++11")

include(ext/DownloadProject/DownloadProject.cmake)
download_project(PROJ                googletest
                 GIT_REPOSITORY      https://github.com/google/googletest.git
                 GIT_TAG             master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
                        "${gmock_SOURCE_DIR}/include")
endif()


include_directories(src/chapter_01)
add_executable(
        chapter_01_unittest
        src/chapter_01/problem_01_is_unique.cpp
        #src/chapter_01/problem_01_is_unique.h
        test/chapter_01/problem_01_is_unique_unittest.cpp
)
target_link_libraries(chapter_01_unittest gtest gmock_main)
