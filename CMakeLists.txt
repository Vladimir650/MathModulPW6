cmake_minimum_required(VERSION 3.10)
project(MathModulPW6)

set(SOURSES main.cpp library.cpp)
set(DESCRIPTION CACHE STRING "MathModul")

message("Sources: ${SOURSES}")
message("Project: ${PROJECT_NAME}")
message("Description: ${DESCRIPTION}")

add_executable(${PROJECT_NAME} ${SOURSES})