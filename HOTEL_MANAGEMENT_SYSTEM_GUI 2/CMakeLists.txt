cmake_minimum_required(VERSION 3.16)

project(HOTEL_MANAGEMENT_SYSTEM_GUI VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        revenuewindow.cpp
        revenuewindow.h
        revenuewindow.ui
        roominfodialog.cpp
        roominfodialog.h
        roominfodialog.ui
        bookroom.cpp
        bookroom.h
        bookroom.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(HOTEL_MANAGEMENT_SYSTEM_GUI
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        revenuewindow.h revenuewindow.cpp revenuewindow.ui
        roominfodialog.h roominfodialog.cpp roominfodialog.ui
        bookroom.h bookroom.cpp bookroom.ui
        images/icons8-bungalow-60.png images/icons8-door-40-2.png images/icons8-door-40.png images/icons8-old-door-48.png images/icons8-parking-and-penthouse-48.png images/icons8-suite-64-2.png
    )
else()
    if(ANDROID)
        add_library(HOTEL_MANAGEMENT_SYSTEM_GUI SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(HOTEL_MANAGEMENT_SYSTEM_GUI
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(HOTEL_MANAGEMENT_SYSTEM_GUI PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.HOTEL_MANAGEMENT_SYSTEM_GUI)
endif()
set_target_properties(HOTEL_MANAGEMENT_SYSTEM_GUI PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS HOTEL_MANAGEMENT_SYSTEM_GUI
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(HOTEL_MANAGEMENT_SYSTEM_GUI)
endif()
