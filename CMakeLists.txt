cmake_minimum_required(VERSION 3.0.0)
project(AccountBook VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(./src/sqlite3)

add_subdirectory(./src/sqlite3)

aux_source_directory(./src ROOT_SRC)

add_executable(AccountBook ${ROOT_SRC})

# add_executable(AccountBook src/main.cpp src/sqlitehelper.cpp)

target_link_libraries(AccountBook sqlite3)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
