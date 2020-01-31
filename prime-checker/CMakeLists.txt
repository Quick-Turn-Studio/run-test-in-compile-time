project(PrimeCheckerLib)

# Creating static library
add_library(PrimeCheckerLib STATIC PrimeChecker.cpp)

target_include_directories(PrimeCheckerLib INTERFACE .)

# Add directory with test project to build system
add_subdirectory(tests)