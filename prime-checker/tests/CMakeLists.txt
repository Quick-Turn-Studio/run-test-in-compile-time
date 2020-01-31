set(TEST_NAME PrimeCheckerTests)

project(${TEST_NAME})

# creating test application
add_executable(${TEST_NAME} PrimeChecherTests.cpp)

# linking to tested library
target_link_libraries(${TEST_NAME} PRIVATE PrimeCheckerLib)

# linking to Google Test Framework
target_link_libraries(${TEST_NAME} PRIVATE gtest gtest_main)

# creating target to run test during compilation
add_custom_target(Run_${TEST_NAME}
                  COMMAND ${TEST_NAME}
                  COMMENT "Running ${TEST_NAME}...")