cmake_minimum_required( VERSION 3.14 )
project( HDSM )
list(APPEND CMAKE_PREFIX_PATH "/usr/local/libtorch")
find_package( Torch REQUIRED )
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory( src SRC_LIST )
set( HEADER_FILES defs/hdsm.h defs/hdsmimpl.h )

include_directories( defs )
include_directories( /usr/local/include )

add_library( ${PROJECT_NAME} ${SRC_LIST} ${HEADER_FILES} )
target_link_libraries( ${PROJECT_NAME} ${TORCH_LIBRARIES} )

