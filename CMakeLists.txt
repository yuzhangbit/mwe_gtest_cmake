CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
PROJECT(mwe)

ENABLE_TESTING()

## for gtest
ADD_SUBDIRECTORY(deps/googletest EXCLUDE_FROM_ALL)
INCLUDE_DIRECTORIES(${gtest_SOURCE_DIR}/include/ ${gtest_SOURCE_DIR})

## Wrap the generated files to the top target to build
ADD_CUSTOM_TARGET(tests)


ADD_EXECUTABLE(add_test
  tests/add_test.cpp)
TARGET_LINK_LIBRARIES(add_test
  gtest
  gtest_main)

ADD_EXECUTABLE(sub_test
  tests/sub_test.cpp)
TARGET_LINK_LIBRARIES(sub_test
  gtest
  gtest_main)

## This is for running "make test" command
ADD_TEST(NAME add_test COMMAND add_test)
ADD_TEST(NAME sub_test COMMAND sub_test)

## This is for wrapping all the tests to a single target called tests to build
## Without this command, make test command will not run any test
## If you miss some test executable targets, make test won't run the missed ones
ADD_DEPENDENCIES(tests
  add_test
  sub_test)

