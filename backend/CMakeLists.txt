cmake_minimum_required(VERSION 3.10)
project(MyWebAppBackend)

# Add your C++ source files here
set(SOURCES
    src/example.cpp
)

# Add your C++ header files here
set(HEADERS
    include/example.h
)

# Define the executable target
add_executable(MyWebAppBackend ${SOURCES} ${HEADERS})
