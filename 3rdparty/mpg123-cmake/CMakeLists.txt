cmake_minimum_required(VERSION 3.12)

project(mpg123 LANGUAGES C ASM)

include(cmake/search_libs.cmake)

set(PACKAGE_VERSION ${PROJECT_VERSION})
add_subdirectory("src")
file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/src/libmpg123")
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../mpg123/src/libmpg123/fmt123.h.in")
  configure_file("${CMAKE_CURRENT_SOURCE_DIR}/../mpg123/src/libmpg123/fmt123.h.in" "${CMAKE_CURRENT_BINARY_DIR}/src/libmpg123/fmt123.h" @ONLY)
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../mpg123/src/libmpg123/fmt123.h")
  file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/../mpg123/src/libmpg123/fmt123.h" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/src/libmpg123")
endif()
