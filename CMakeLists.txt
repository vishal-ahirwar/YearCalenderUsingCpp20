cmake_minimum_required(VERSION 3.0)
project(YearCalender)

set(CMAKE_CXX_STANDARD 20)

add_executable(YearCalender main.cpp
        Calender.cpp
        Calender.h
)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VENDOR "Cool \"Company\"")
include(CPack)
