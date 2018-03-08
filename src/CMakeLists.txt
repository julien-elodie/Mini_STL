include_directories(${PROJECT_SOURCE_DIR}/lib/STL)

set(APP_SRC main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(CML ${APP_SRC})

target_link_libraries(CML libSTL)