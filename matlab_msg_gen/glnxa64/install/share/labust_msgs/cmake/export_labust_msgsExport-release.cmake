#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "labust_msgs::labust_msgs_matlab" for configuration "Release"
set_property(TARGET labust_msgs::labust_msgs_matlab APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(labust_msgs::labust_msgs_matlab PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblabust_msgs_matlab.so"
  IMPORTED_SONAME_RELEASE "liblabust_msgs_matlab.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS labust_msgs::labust_msgs_matlab )
list(APPEND _IMPORT_CHECK_FILES_FOR_labust_msgs::labust_msgs_matlab "${_IMPORT_PREFIX}/lib/liblabust_msgs_matlab.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
