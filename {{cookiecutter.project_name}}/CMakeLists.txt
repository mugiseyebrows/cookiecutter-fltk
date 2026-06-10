cmake_minimum_required(VERSION 3.26)

project({{cookiecutter.project_name}} VERSION 0.0.1 LANGUAGES CXX)

configure_file(app.rc.in app.rc)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(FLTK CONFIG REQUIRED)

if(WIN32)
add_compile_definitions(WINVER=0x0602 _WIN32_WINNT=0x0602 UNICODE _UNICODE)
endif()

if(WIN32)
set(XXD "C:/Program Files/Git/usr/bin/xxd.exe")
else()
set(XXD xxd)
endif()

add_custom_command(OUTPUT app_icon.h COMMAND "${XXD}" -n app_icon -i "${CMAKE_SOURCE_DIR}/icons/app.png" app_icon.h)

add_executable({{cookiecutter.project_name}} WIN32 main.cpp app.rc app_icon.h)

target_link_libraries({{cookiecutter.project_name}} PRIVATE fltk::fltk fltk::images)