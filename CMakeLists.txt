cmake_minimum_required(VERSION 3.22.1)
project(emailCLI)

find_package(Poco REQUIRED COMPONENTS Net Util)

add_executable(emailCLI source/main.cpp)
target_link_libraries(emailCLI PRIVATE Poco::Net Poco::Util)