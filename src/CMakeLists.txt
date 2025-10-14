include_directories(${CMAKE_SOURCE_DIR}/include)
# add_library(library SHARED library.cpp)
add_library(io SHARED io.cpp)

add_executable(main main.cpp)

target_link_libraries(main io)

# add_executable(some_binary some_source.cpp)