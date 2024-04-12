# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject1")

# Include sub-projects.
add_subdirectory ("CMakeProject1")


set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)

add_executable(gray_scale_conversion main.cpp)
target_link_libraries(gray_scale_conversion ${OpenCV_LIBS})