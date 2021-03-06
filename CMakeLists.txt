#/**********************************************************\ 
# Auto-generated CMakeLists.txt for the IndexedDatabasePlugin project
#\**********************************************************/

# Written to work with cmake 2.6
cmake_minimum_required (VERSION 2.6)
set (CMAKE_BACKWARDS_COMPATIBILITY 2.6)

include(${CMAKE_DIR}/common.cmake)

set (PROJNAME ${PLUGIN_NAME})

browserplugin_project(${PROJNAME})

file (GLOB GENERAL RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    *.cpp
    *.h
    *.cmake
    root/API/*.cpp
    root/API/*.h
    root/API/Synchronized/*.cpp
    root/API/Synchronized/*.h
    root/Implementation/*.cpp
    root/Implementation/*.h
    root/Implementation/BerkeleyDatabase/*.cpp
    root/Implementation/BerkeleyDatabase/*.h
    root/Support/*.cpp
    root/Support/*.h
    )

# Generated files are stored in ${GENERATED} by the project configuration
SET_SOURCE_FILES_PROPERTIES(
    ${GENERATED}
    PROPERTIES
        GENERATED 1
    )

SOURCE_GROUP(Generated FILES
    ${GENERATED}
    )

SET( SOURCES
    ${GENERAL}
    ${GENERATED}
    )

# This will include Win/projectDef.cmake, Linux/projectDef.cmake, etc
include_platform()

