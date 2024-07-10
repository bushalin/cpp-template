# Set up directory variables
# set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
# set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)

# Find all .cpp files in src/application
file(GLOB_RECURSE APPLICATION_SOURCES "${SRC_DIR}/application/*.cpp")

# Add GoogleTest
include(GoogleTest)

# Define a function for creating test targets
function(create_test TARGET_NAME SOURCE_FILE)
    add_executable(
        ${TARGET_NAME}
        ${SOURCE_FILE}
        ${APPLICATION_SOURCES} # Include application sources
    )

    target_include_directories(${TARGET_NAME} PRIVATE ${SRC_DIR}/application)
    target_link_libraries(${TARGET_NAME} gtest gtest_main)

    gtest_discover_tests(${TARGET_NAME})
endfunction()

# Create the test target
create_test(${APP_NAME}_test ${TEST_DIR}/tests.cpp)
