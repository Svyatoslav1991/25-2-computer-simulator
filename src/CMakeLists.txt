# CMakeList.txt : CMake project for 25-2-computer-simulator, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("25-2-computer-simulator")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (25-2-computer-simulator "main.cpp"  "ram.cpp"  "cpu.cpp" "disk.cpp"  "gpu.cpp" "kbd.cpp"
	${MY_INCLUDE_DIR}/functions.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h)

target_include_directories(25-2-computer-simulator PUBLIC ${CMAKE_SOURCE_DIR}/include)

# TODO: Add tests and install targets if needed.
