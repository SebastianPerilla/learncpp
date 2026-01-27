# library
add_library(passport SHARED passport.cpp)
target_include_directories(passport PUBLIC ${CMAKE_SOURCE_DIR}/include)

# executable
add_executable(main main.cpp)
target_link_libraries(main PUBLIC passport)
