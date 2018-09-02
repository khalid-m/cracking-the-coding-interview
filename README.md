# cracking-the-coding-interview
C++ solutions and tests for Cracking The Coding Interview book


### Building Google Test
We used a [git repository](https://github.com/Crascit/DownloadProject) that contains a generalized implementation for downloading an external project's source at CMake's configure step rather than as part of the main build. The primary advantage of this is that the project's source code can then be included directly in the main CMake build using the add_subdirectory() command, making all of the external project's targets, etc. available without any further effort. The technique is fully explained in this [article](https://crascit.com/2015/07/25/cmake-gtest/). The git repository is added in the ext directory.
