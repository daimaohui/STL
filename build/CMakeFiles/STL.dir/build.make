# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/c/Users/daimaohui/Desktop/C++/STL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/daimaohui/Desktop/C++/STL/build

# Include any dependencies generated for this target.
include CMakeFiles/STL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/STL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/STL.dir/flags.make

CMakeFiles/STL.dir/src/test.cpp.o: CMakeFiles/STL.dir/flags.make
CMakeFiles/STL.dir/src/test.cpp.o: ../src/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/daimaohui/Desktop/C++/STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/STL.dir/src/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/STL.dir/src/test.cpp.o -c /mnt/c/Users/daimaohui/Desktop/C++/STL/src/test.cpp

CMakeFiles/STL.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL.dir/src/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/daimaohui/Desktop/C++/STL/src/test.cpp > CMakeFiles/STL.dir/src/test.cpp.i

CMakeFiles/STL.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL.dir/src/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/daimaohui/Desktop/C++/STL/src/test.cpp -o CMakeFiles/STL.dir/src/test.cpp.s

# Object files for target STL
STL_OBJECTS = \
"CMakeFiles/STL.dir/src/test.cpp.o"

# External object files for target STL
STL_EXTERNAL_OBJECTS =

libSTL.so: CMakeFiles/STL.dir/src/test.cpp.o
libSTL.so: CMakeFiles/STL.dir/build.make
libSTL.so: CMakeFiles/STL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/daimaohui/Desktop/C++/STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libSTL.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/STL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/STL.dir/build: libSTL.so

.PHONY : CMakeFiles/STL.dir/build

CMakeFiles/STL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/STL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/STL.dir/clean

CMakeFiles/STL.dir/depend:
	cd /mnt/c/Users/daimaohui/Desktop/C++/STL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/daimaohui/Desktop/C++/STL /mnt/c/Users/daimaohui/Desktop/C++/STL /mnt/c/Users/daimaohui/Desktop/C++/STL/build /mnt/c/Users/daimaohui/Desktop/C++/STL/build /mnt/c/Users/daimaohui/Desktop/C++/STL/build/CMakeFiles/STL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/STL.dir/depend

