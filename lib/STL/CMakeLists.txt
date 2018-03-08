set(LIB_SRC STL.cpp)

add_library(libSTL ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set_target_properties(libSTL PROPERTIES OUTPUT_NAME "STL")