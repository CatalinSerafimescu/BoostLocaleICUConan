cmake_minimum_required(VERSION 3.1...3.29)
include(conan_toolchain.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_CXX_STANDARD 20)

project(
  test_locale
  VERSION 1.0
  LANGUAGES C CXX)


find_package(Boost 1.85.0 COMPONENTS locale REQUIRED)
find_package(ICU 74.2 COMPONENTS i18n REQUIRED)

add_executable(test_locale test_locale.cpp)
target_link_libraries(test_locale Boost::locale ICU::i18n)
