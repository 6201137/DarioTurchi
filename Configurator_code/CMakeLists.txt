cmake_minimum_required(VERSION 3.7)
project(Configurator_code)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES main.cpp Component.cpp Component.h CPU.cpp CPU.h Motherboard.cpp Motherboard.h GraphicCard.cpp GraphicCard.h PSU.cpp PSU.h Case.cpp Case.h RAM.cpp RAM.h Storage.cpp Storage.h AssembledPC.cpp AssembledPC.h ComponentsDatabase.h)
add_executable(Configurator_code main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Configurator_code core)