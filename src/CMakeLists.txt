# library
add_library(io SHARED io.cpp)
target_include_directories(io PUBLIC ${CMAKE_SOURCE_DIR}/include)

# executable
add_executable(main main.cpp)
target_link_libraries(main PRIVATE io)
