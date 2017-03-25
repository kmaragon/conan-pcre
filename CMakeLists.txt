cmake_minimum_required(VERSION 2.8)

include(conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_LIBRARY_PATH, ${CONAN_BZIP2_LIB_DIRS} ${CONAN_ZLIB_LIB_DIRS})
set(CMAKE_LIBRARY_PATH, ${CONAN_BZIP2_INCLUDE_DIRS} ${CONAN_ZLIB_INCLUDE_DIRS})

string(REGEX REPLACE "([0-9]*\\.[0-9]*)\\.([0-9]*)" "\\1" pkgver "${CONAN_PACKAGE_VERSION}")
add_subdirectory("pcre-${pkgver}")