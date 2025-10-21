cmake_minimum_required(VERSION 3.12)

project(portal-cli
        VERSION 0.0.0.1
        LANGUAGES C CXX
        DESCRIPTION "Play portal voice lines from the terminal")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

set(CMAKE_INSTALL_PREFIX "/usr/local/bin/")

add_executable(portal-cli
     ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
     ${CMAKE_CURRENT_SOURCE_DIR}/src/player.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/src)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)
target_link_libraries(portal-cli SFML::Audio)

if (NOT UNIX)
    message("portal-cli currently only supports unix systems.
            Windows support is not guaranteed.")
endif()

target_compile_options(portal-cli PRIVATE -g)


install(TARGETS portal-cli
    DESTINATION ${CMAKE_INSTALL_PREFIX}
    RENAME portal-cli
)