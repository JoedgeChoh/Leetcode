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
CMAKE_SOURCE_DIR = /home/zhuhe/zhuhe/Leetcode/basic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhuhe/zhuhe/Leetcode/basic/build

# Include any dependencies generated for this target.
include CMakeFiles/set.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/set.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/set.dir/flags.make

CMakeFiles/set.dir/src/set.cpp.o: CMakeFiles/set.dir/flags.make
CMakeFiles/set.dir/src/set.cpp.o: ../src/set.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhuhe/zhuhe/Leetcode/basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/set.dir/src/set.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/set.dir/src/set.cpp.o -c /home/zhuhe/zhuhe/Leetcode/basic/src/set.cpp

CMakeFiles/set.dir/src/set.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/set.dir/src/set.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhuhe/zhuhe/Leetcode/basic/src/set.cpp > CMakeFiles/set.dir/src/set.cpp.i

CMakeFiles/set.dir/src/set.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/set.dir/src/set.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhuhe/zhuhe/Leetcode/basic/src/set.cpp -o CMakeFiles/set.dir/src/set.cpp.s

CMakeFiles/set.dir/src/set.cpp.o.requires:

.PHONY : CMakeFiles/set.dir/src/set.cpp.o.requires

CMakeFiles/set.dir/src/set.cpp.o.provides: CMakeFiles/set.dir/src/set.cpp.o.requires
	$(MAKE) -f CMakeFiles/set.dir/build.make CMakeFiles/set.dir/src/set.cpp.o.provides.build
.PHONY : CMakeFiles/set.dir/src/set.cpp.o.provides

CMakeFiles/set.dir/src/set.cpp.o.provides.build: CMakeFiles/set.dir/src/set.cpp.o


# Object files for target set
set_OBJECTS = \
"CMakeFiles/set.dir/src/set.cpp.o"

# External object files for target set
set_EXTERNAL_OBJECTS =

../bin/set: CMakeFiles/set.dir/src/set.cpp.o
../bin/set: CMakeFiles/set.dir/build.make
../bin/set: CMakeFiles/set.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhuhe/zhuhe/Leetcode/basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/set"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/set.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/set.dir/build: ../bin/set

.PHONY : CMakeFiles/set.dir/build

CMakeFiles/set.dir/requires: CMakeFiles/set.dir/src/set.cpp.o.requires

.PHONY : CMakeFiles/set.dir/requires

CMakeFiles/set.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/set.dir/cmake_clean.cmake
.PHONY : CMakeFiles/set.dir/clean

CMakeFiles/set.dir/depend:
	cd /home/zhuhe/zhuhe/Leetcode/basic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhuhe/zhuhe/Leetcode/basic /home/zhuhe/zhuhe/Leetcode/basic /home/zhuhe/zhuhe/Leetcode/basic/build /home/zhuhe/zhuhe/Leetcode/basic/build /home/zhuhe/zhuhe/Leetcode/basic/build/CMakeFiles/set.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/set.dir/depend

