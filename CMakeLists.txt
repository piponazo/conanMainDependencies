cmake_minimum_required(VERSION 3.13)

project(conanDependencies)

include(cmake/findDependencies.cmake REQUIRED)

add_executable(boost_app boost_app.cpp)
target_link_libraries(boost_app PRIVATE
    Boost::filesystem
    Boost::disable_autolinking
)
