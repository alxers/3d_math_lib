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
CMAKE_SOURCE_DIR = /home/alx/projects/other/3d_math_lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alx/projects/other/3d_math_lib

# Include any dependencies generated for this target.
include CMakeFiles/3d_math_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3d_math_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3d_math_lib.dir/flags.make

CMakeFiles/3d_math_lib.dir/src/main.cpp.o: CMakeFiles/3d_math_lib.dir/flags.make
CMakeFiles/3d_math_lib.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alx/projects/other/3d_math_lib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3d_math_lib.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d_math_lib.dir/src/main.cpp.o -c /home/alx/projects/other/3d_math_lib/src/main.cpp

CMakeFiles/3d_math_lib.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d_math_lib.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alx/projects/other/3d_math_lib/src/main.cpp > CMakeFiles/3d_math_lib.dir/src/main.cpp.i

CMakeFiles/3d_math_lib.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d_math_lib.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alx/projects/other/3d_math_lib/src/main.cpp -o CMakeFiles/3d_math_lib.dir/src/main.cpp.s

CMakeFiles/3d_math_lib.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/3d_math_lib.dir/src/main.cpp.o.requires

CMakeFiles/3d_math_lib.dir/src/main.cpp.o.provides: CMakeFiles/3d_math_lib.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/3d_math_lib.dir/build.make CMakeFiles/3d_math_lib.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/3d_math_lib.dir/src/main.cpp.o.provides

CMakeFiles/3d_math_lib.dir/src/main.cpp.o.provides.build: CMakeFiles/3d_math_lib.dir/src/main.cpp.o


CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o: CMakeFiles/3d_math_lib.dir/flags.make
CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o: src/vector3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alx/projects/other/3d_math_lib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o -c /home/alx/projects/other/3d_math_lib/src/vector3.cpp

CMakeFiles/3d_math_lib.dir/src/vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d_math_lib.dir/src/vector3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alx/projects/other/3d_math_lib/src/vector3.cpp > CMakeFiles/3d_math_lib.dir/src/vector3.cpp.i

CMakeFiles/3d_math_lib.dir/src/vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d_math_lib.dir/src/vector3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alx/projects/other/3d_math_lib/src/vector3.cpp -o CMakeFiles/3d_math_lib.dir/src/vector3.cpp.s

CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.requires:

.PHONY : CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.requires

CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.provides: CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.requires
	$(MAKE) -f CMakeFiles/3d_math_lib.dir/build.make CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.provides.build
.PHONY : CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.provides

CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.provides.build: CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o


# Object files for target 3d_math_lib
3d_math_lib_OBJECTS = \
"CMakeFiles/3d_math_lib.dir/src/main.cpp.o" \
"CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o"

# External object files for target 3d_math_lib
3d_math_lib_EXTERNAL_OBJECTS =

3d_math_lib: CMakeFiles/3d_math_lib.dir/src/main.cpp.o
3d_math_lib: CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o
3d_math_lib: CMakeFiles/3d_math_lib.dir/build.make
3d_math_lib: CMakeFiles/3d_math_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alx/projects/other/3d_math_lib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 3d_math_lib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3d_math_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3d_math_lib.dir/build: 3d_math_lib

.PHONY : CMakeFiles/3d_math_lib.dir/build

CMakeFiles/3d_math_lib.dir/requires: CMakeFiles/3d_math_lib.dir/src/main.cpp.o.requires
CMakeFiles/3d_math_lib.dir/requires: CMakeFiles/3d_math_lib.dir/src/vector3.cpp.o.requires

.PHONY : CMakeFiles/3d_math_lib.dir/requires

CMakeFiles/3d_math_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3d_math_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3d_math_lib.dir/clean

CMakeFiles/3d_math_lib.dir/depend:
	cd /home/alx/projects/other/3d_math_lib && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alx/projects/other/3d_math_lib /home/alx/projects/other/3d_math_lib /home/alx/projects/other/3d_math_lib /home/alx/projects/other/3d_math_lib /home/alx/projects/other/3d_math_lib/CMakeFiles/3d_math_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3d_math_lib.dir/depend
