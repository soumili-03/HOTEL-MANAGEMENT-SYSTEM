# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug

# Utility rule file for HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/progress.make

CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen: HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp

HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp: CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target HOTEL_MANAGEMENT_SYSTEM_GUI"
	/opt/homebrew/Cellar/cmake/3.30.2/bin/cmake -E cmake_autogen /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug/CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.30.2/bin/cmake -E touch /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp

HOTEL_MANAGEMENT_SYSTEM_GUI_autogen: CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen
HOTEL_MANAGEMENT_SYSTEM_GUI_autogen: HOTEL_MANAGEMENT_SYSTEM_GUI_autogen/timestamp
HOTEL_MANAGEMENT_SYSTEM_GUI_autogen: CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/build.make
.PHONY : HOTEL_MANAGEMENT_SYSTEM_GUI_autogen

# Rule to build all files generated by this target.
CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/build: HOTEL_MANAGEMENT_SYSTEM_GUI_autogen
.PHONY : CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/build

CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/clean

CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/depend:
	cd /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug /Users/shruti/Desktop/HOTEL-MANAGEMENT-SYSTEM-main/HOTEL_MANAGEMENT_SYSTEM_GUI/build/Desktop-Debug/CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/HOTEL_MANAGEMENT_SYSTEM_GUI_autogen.dir/depend

