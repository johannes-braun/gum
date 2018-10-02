cmake_minimum_required(VERSION 3.11)

option(GUM_COMPILE_EXAMPLES "" ON)
option(GUM_ALIAS_LIBRARY "" ON)
option(GUM_ENABLE_TESTS "" ON)

project(gum)

set(CMAKE_CXX_MINIMUM)
add_library(gum INTERFACE)
target_compile_features(gum INTERFACE cxx_std_17)
set_target_properties(gum PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}/include)

if(GUM_ALIAS_LIBRARY)
    add_library(jbraun::gum ALIAS gum)
endif()

if(GUM_COMPILE_EXAMPLES)
    add_subdirectory(examples)
endif()

if(GUM_ENABLE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()