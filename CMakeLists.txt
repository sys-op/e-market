cmake_minimum_required(VERSION 3.0.0...3.5)
project(vending_machine VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(e-market main.cpp IElectronics.cpp Appliances.cpp Device.cpp Player.cpp Smartphone.cpp Fridge.cpp TVset.cpp Mixer.cpp Radioset.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)