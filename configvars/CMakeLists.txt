cmake_minimum_required(VERSION 3.10)
project(ConfigVars C)

# Find Python development files
find_package(Python3 COMPONENTS Development REQUIRED)

# Add executable
add_executable(configvars configvars.c)

# Link against Python libraries and include directories
target_include_directories(configvars PRIVATE ${Python3_INCLUDE_DIRS})
target_link_libraries(configvars PRIVATE ${Python3_LIBRARIES})
