cmake_minimum_required(VERSION 3.7)
project(Configurator_code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Component.cpp Component.h CPU.cpp CPU.h Motherboard.cpp Motherboard.h GraphicCard.cpp GraphicCard.h PSU.cpp PSU.h Case.cpp Case.h RAM.cpp RAM.h Storage.cpp Storage.h AssembledPC.cpp AssembledPC.h AssembledPCDecorator.cpp AssembledPCDecorator.h Controller.cpp Controller.h)
add_executable(Configurator_code ${SOURCE_FILES})