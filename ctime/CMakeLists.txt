cmake_minimum_required(VERSION 3.10)
project(PythonCTime C)

# Find Python development files
find_package(Python3 COMPONENTS Development REQUIRED)

# Add executable
add_executable(pyctime pyctime.c)

# Link against Python libraries and include directories
target_include_directories(pyctime PRIVATE ${Python3_INCLUDE_DIRS})
target_link_libraries(pyctime PRIVATE ${Python3_LIBRARIES})
