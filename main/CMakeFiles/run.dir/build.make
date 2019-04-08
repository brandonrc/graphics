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

# Include any dependencies generated for this target.
include main/CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/run.dir/flags.make

main/CMakeFiles/run.dir/run.cpp.o: main/CMakeFiles/run.dir/flags.make
main/CMakeFiles/run.dir/run.cpp.o: main/run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ncc1701/graphicsCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/run.dir/run.cpp.o"
	cd /home/ncc1701/graphicsCode/main && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/run.cpp.o -c /home/ncc1701/graphicsCode/main/run.cpp

main/CMakeFiles/run.dir/run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/run.cpp.i"
	cd /home/ncc1701/graphicsCode/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ncc1701/graphicsCode/main/run.cpp > CMakeFiles/run.dir/run.cpp.i

main/CMakeFiles/run.dir/run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/run.cpp.s"
	cd /home/ncc1701/graphicsCode/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ncc1701/graphicsCode/main/run.cpp -o CMakeFiles/run.dir/run.cpp.s

main/CMakeFiles/run.dir/run.cpp.o.requires:

.PHONY : main/CMakeFiles/run.dir/run.cpp.o.requires

main/CMakeFiles/run.dir/run.cpp.o.provides: main/CMakeFiles/run.dir/run.cpp.o.requires
	$(MAKE) -f main/CMakeFiles/run.dir/build.make main/CMakeFiles/run.dir/run.cpp.o.provides.build
.PHONY : main/CMakeFiles/run.dir/run.cpp.o.provides

main/CMakeFiles/run.dir/run.cpp.o.provides.build: main/CMakeFiles/run.dir/run.cpp.o


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/run.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

main/run: main/CMakeFiles/run.dir/run.cpp.o
main/run: main/CMakeFiles/run.dir/build.make
main/run: /usr/lib/x86_64-linux-gnu/libGL.so
main/run: /usr/lib/x86_64-linux-gnu/libGLU.so
main/run: renderer/librenderer-util.a
main/run: src/libsive-util.a
main/run: /usr/lib/x86_64-linux-gnu/libGLEW.so
main/run: glfw-master/src/libglfw3.a
main/run: src/libsive-util.a
main/run: renderer/librenderer-util.a
main/run: /usr/lib/x86_64-linux-gnu/libboost_program_options.a
main/run: /usr/lib/x86_64-linux-gnu/libpng.so
main/run: /usr/lib/x86_64-linux-gnu/libz.so
main/run: /usr/lib/x86_64-linux-gnu/libGL.so
main/run: /usr/lib/x86_64-linux-gnu/libGLU.so
main/run: /usr/lib/x86_64-linux-gnu/libGLEW.so
main/run: /usr/lib/x86_64-linux-gnu/libboost_program_options.a
main/run: /usr/lib/x86_64-linux-gnu/libpng.so
main/run: /usr/lib/x86_64-linux-gnu/libz.so
main/run: /usr/lib/x86_64-linux-gnu/librt.so
main/run: /usr/lib/x86_64-linux-gnu/libm.so
main/run: /usr/lib/x86_64-linux-gnu/libX11.so
main/run: main/CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ncc1701/graphicsCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable run"
	cd /home/ncc1701/graphicsCode/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/run.dir/build: main/run

.PHONY : main/CMakeFiles/run.dir/build

main/CMakeFiles/run.dir/requires: main/CMakeFiles/run.dir/run.cpp.o.requires

.PHONY : main/CMakeFiles/run.dir/requires

main/CMakeFiles/run.dir/clean:
	cd /home/ncc1701/graphicsCode/main && $(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/run.dir/clean

main/CMakeFiles/run.dir/depend:
	cd /home/ncc1701/graphicsCode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ncc1701/graphicsCode /home/ncc1701/graphicsCode/main /home/ncc1701/graphicsCode /home/ncc1701/graphicsCode/main /home/ncc1701/graphicsCode/main/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/run.dir/depend

