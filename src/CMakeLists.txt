# library
add_library(library SHARED library.cpp)
target_include_directories(library PUBLIC ${CMAKE_SOURCE_DIR}/include)

# executable
add_executable(main main.cpp)
target_link_libraries(main PRIVATE library)
