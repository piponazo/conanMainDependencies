if (NOT EXISTS ${CMAKE_BINARY_DIR}/conan_paths.cmake)
    message(FATAL_ERROR "This project dependes on conan. Run conan install before running cmake")
endif()

#include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
#conan_set_find_paths()
include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_DEBUG ON)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost EXACT 1.70 REQUIRED
    COMPONENTS
        filesystem
)
