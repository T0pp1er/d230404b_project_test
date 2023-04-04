cmake_minimum_required(VERSION 3.16)

project(d230404b_project_test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

set(CPP_AND_H_PROJECT_FILES main.cpp)


### THIS WORKS ##########################################

#set(CPP_AND_H_PROJECT_FILES ${CPP_AND_H_PROJECT_FILES}
#    values/testvalue.h
#    values/testvalue.cpp
#)
#include_directories(values)

### THIS DOES NOT WORK ##################################

set(VALUES_DIR values)
add_subdirectory(${VALUES_DIR})

#########################################################


qt_add_executable(appd230404b_project_test
    ${CPP_AND_H_PROJECT_FILES}
)

qt_add_qml_module(appd230404b_project_test
    URI d230404b_project_test
    VERSION 1.0
    QML_FILES Main.qml
)

set_target_properties(appd230404b_project_test PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appd230404b_project_test
    PRIVATE Qt6::Quick
)

install(TARGETS appd230404b_project_test
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
