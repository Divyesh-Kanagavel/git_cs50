cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( cannyedge cannyedge.cpp )
target_link_libraries( cannyedge ${OpenCV_LIBS} )


