cmake_minimum_required(VERSION 3.10.0)
project(cppproject VERSION 0.1.0 LANGUAGES C CXX)

include_directories("./src/inc")

file(GLOB cppproject_src "./src/*.cpp" "./src/*.c")

add_executable(${PROJECT_NAME} ${cppproject_src})

include(CTest)
enable_testing()

add_test(NAME cppproject_test COMMAND $<TARGET_FILE:cppproject>)
