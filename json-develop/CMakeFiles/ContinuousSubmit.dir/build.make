# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/test/graphicsCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/test/graphicsCode

# Utility rule file for ContinuousSubmit.

# Include the progress variables for this target.
include json-develop/CMakeFiles/ContinuousSubmit.dir/progress.make

json-develop/CMakeFiles/ContinuousSubmit:
	cd /tmp/test/graphicsCode/json-develop && /usr/bin/ctest -D ContinuousSubmit

ContinuousSubmit: json-develop/CMakeFiles/ContinuousSubmit
ContinuousSubmit: json-develop/CMakeFiles/ContinuousSubmit.dir/build.make

.PHONY : ContinuousSubmit

# Rule to build all files generated by this target.
json-develop/CMakeFiles/ContinuousSubmit.dir/build: ContinuousSubmit

.PHONY : json-develop/CMakeFiles/ContinuousSubmit.dir/build

json-develop/CMakeFiles/ContinuousSubmit.dir/clean:
	cd /tmp/test/graphicsCode/json-develop && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousSubmit.dir/cmake_clean.cmake
.PHONY : json-develop/CMakeFiles/ContinuousSubmit.dir/clean

json-develop/CMakeFiles/ContinuousSubmit.dir/depend:
	cd /tmp/test/graphicsCode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/test/graphicsCode /tmp/test/graphicsCode/json-develop /tmp/test/graphicsCode /tmp/test/graphicsCode/json-develop /tmp/test/graphicsCode/json-develop/CMakeFiles/ContinuousSubmit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : json-develop/CMakeFiles/ContinuousSubmit.dir/depend
