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
CMAKE_COMMAND = /cygdrive/c/Users/Fredy/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Fredy/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Fredy/CLionProjects/homework6_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework6_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework6_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework6_3.dir/flags.make

CMakeFiles/homework6_3.dir/main.cpp.o: CMakeFiles/homework6_3.dir/flags.make
CMakeFiles/homework6_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework6_3.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework6_3.dir/main.cpp.o -c /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/main.cpp

CMakeFiles/homework6_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework6_3.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/main.cpp > CMakeFiles/homework6_3.dir/main.cpp.i

CMakeFiles/homework6_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework6_3.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/main.cpp -o CMakeFiles/homework6_3.dir/main.cpp.s

CMakeFiles/homework6_3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/homework6_3.dir/main.cpp.o.requires

CMakeFiles/homework6_3.dir/main.cpp.o.provides: CMakeFiles/homework6_3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/homework6_3.dir/build.make CMakeFiles/homework6_3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/homework6_3.dir/main.cpp.o.provides

CMakeFiles/homework6_3.dir/main.cpp.o.provides.build: CMakeFiles/homework6_3.dir/main.cpp.o


# Object files for target homework6_3
homework6_3_OBJECTS = \
"CMakeFiles/homework6_3.dir/main.cpp.o"

# External object files for target homework6_3
homework6_3_EXTERNAL_OBJECTS =

homework6_3.exe: CMakeFiles/homework6_3.dir/main.cpp.o
homework6_3.exe: CMakeFiles/homework6_3.dir/build.make
homework6_3.exe: CMakeFiles/homework6_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable homework6_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework6_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework6_3.dir/build: homework6_3.exe

.PHONY : CMakeFiles/homework6_3.dir/build

CMakeFiles/homework6_3.dir/requires: CMakeFiles/homework6_3.dir/main.cpp.o.requires

.PHONY : CMakeFiles/homework6_3.dir/requires

CMakeFiles/homework6_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homework6_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homework6_3.dir/clean

CMakeFiles/homework6_3.dir/depend:
	cd /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Fredy/CLionProjects/homework6_3 /cygdrive/c/Users/Fredy/CLionProjects/homework6_3 /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug /cygdrive/c/Users/Fredy/CLionProjects/homework6_3/cmake-build-debug/CMakeFiles/homework6_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework6_3.dir/depend

