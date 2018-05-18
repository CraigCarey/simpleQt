cmake_minimum_required(VERSION 3.9.1)

project(simpleQt)

set(CMAKE_CXX_STANDARD 14)

set(QT_SELECT "5.10.1")
set(CMAKE_PREFIX_PATH "/opt/qt/5.10.1/gcc_64/")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run MOC automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

set(QDIO_SOURCES main.cpp)

add_executable(simpleQt simpleQt.cpp)

target_link_libraries(simpleQt Qt5::Widgets)
