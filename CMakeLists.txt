

cmake_minimum_required(VERSION 3.0)
project(glog)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ./include)
target_link_libraries(${PROJECT_NAME} INTERFACE  ${CMAKE_CURRENT_SOURCE_DIR}/lib/libglog.a)
message("${CMAKE_CURRENT_SOURCE_DIR}")

# if project is root project, compile and archive static library
if (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
  add_subdirectory(sample)
endif()

