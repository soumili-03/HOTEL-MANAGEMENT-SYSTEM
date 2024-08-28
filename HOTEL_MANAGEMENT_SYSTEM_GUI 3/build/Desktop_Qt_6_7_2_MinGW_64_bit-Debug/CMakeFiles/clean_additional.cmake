# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir\\ParseCache.txt"
  "HOTEL_MANAGEMENT_SYSTEM_GUI_autogen"
  )
endif()
