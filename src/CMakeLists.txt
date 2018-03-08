include_directories(${PROJECT_SOURCE_DIR}/lib/STL)
include_directories(${PROJECT_SOURCE_DIR}/lib/container/vector)

set(APP_SRC main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(STL ${APP_SRC})

target_link_libraries(STL libSTL)
target_link_libraries(STL libvector)