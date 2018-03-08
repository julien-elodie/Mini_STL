set(LIB_SRC vector.cpp)

add_library(libvector ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set_target_properties(libvector PROPERTIES OUTPUT_NAME "vector")