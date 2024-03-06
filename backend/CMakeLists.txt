cmake_minimum_required(VERSION 3.10)
project(MyWebAppBackend LANGUAGES CXX)  # Specify C++ as the language

# Define project-wide configuration flags
set(CMAKE_CXX_STANDARD 17)       # Use C++17 standard (adjust as needed)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g")  # Enable warnings and debugging

# Include custom CMake modules (if applicable)
# include(CustomModule)

# Define source and header file locations
set(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Add source and header files to the project
set(SOURCES
    "${SOURCE_DIR}/example.cpp"
)
set(HEADERS
    "${INCLUDE_DIR}/example.h"
)

# Create the executable target
add_executable(MyWebAppBackend ${SOURCES} ${HEADERS})

# Set target properties (optional)
target_link_libraries(MyWebAppBackend REQUIRED Threads)  # Link with the Threads library if needed
target_include_directories(MyWebAppBackend PRIVATE "${INCLUDE_DIR}")  # Add include directory to target

# Create a package (optional)
# cmake_install(TARGETS MyWebAppBackend DESTINATION lib)

# Generate build system files
include(CMakeGenerateExportLists)
include(CMakePackageConfig)
write_cmake_exports(MyWebAppBackendConfig CONFIG_CMAKE_CONFIG.cmake)
install(EXPORT MyWebAppBackendConfig DESTINATION lib/cmake)

# Create CPack package (optional)
# set(CPACK_PACKAGE_NAME MyWebAppBackend)
# set(CPACK_PACKAGE_VERSION 0.1.0)
# include(CPack)
