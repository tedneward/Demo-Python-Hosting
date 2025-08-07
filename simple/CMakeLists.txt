cmake_minimum_required(VERSION 3.10)
project(HelloWorld C)

# Find Python development files
find_package(Python3 COMPONENTS Development REQUIRED)

# Add executable
add_executable(hello hello.c)

# Link against Python libraries and include directories
target_include_directories(hello PRIVATE ${Python3_INCLUDE_DIRS})
target_link_libraries(hello PRIVATE ${Python3_LIBRARIES})
