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
CMAKE_SOURCE_DIR = /home/ncc1701/graphicsCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ncc1701/graphicsCode

# Utility rule file for ContinuousBuild.

# Include the progress variables for this target.
include json-develop/CMakeFiles/ContinuousBuild.dir/progress.make

json-develop/CMakeFiles/ContinuousBuild:
	cd /home/ncc1701/graphicsCode/json-develop && /usr/bin/ctest -D ContinuousBuild

ContinuousBuild: json-develop/CMakeFiles/ContinuousBuild
ContinuousBuild: json-develop/CMakeFiles/ContinuousBuild.dir/build.make

.PHONY : ContinuousBuild

# Rule to build all files generated by this target.
json-develop/CMakeFiles/ContinuousBuild.dir/build: ContinuousBuild

.PHONY : json-develop/CMakeFiles/ContinuousBuild.dir/build

json-develop/CMakeFiles/ContinuousBuild.dir/clean:
	cd /home/ncc1701/graphicsCode/json-develop && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousBuild.dir/cmake_clean.cmake
.PHONY : json-develop/CMakeFiles/ContinuousBuild.dir/clean

json-develop/CMakeFiles/ContinuousBuild.dir/depend:
	cd /home/ncc1701/graphicsCode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ncc1701/graphicsCode /home/ncc1701/graphicsCode/json-develop /home/ncc1701/graphicsCode /home/ncc1701/graphicsCode/json-develop /home/ncc1701/graphicsCode/json-develop/CMakeFiles/ContinuousBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : json-develop/CMakeFiles/ContinuousBuild.dir/depend

