cmake_minimum_required(VERSION 3.5)

project(RunTestInCompileTime)

add_subdirectory(third-parties)
add_subdirectory(prime-checker)

# creating application
add_executable(Application main.cpp)

# linking to library that we would like to use
target_link_libraries(Application PrimeCheckerLib)

# before create "Application" build target "Run_PrimeCheckerTests"
add_dependencies(Application Run_PrimeCheckerTests)