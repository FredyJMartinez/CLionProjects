# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/Fredy/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Fredy/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BirthdatesUvaOJ.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BirthdatesUvaOJ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BirthdatesUvaOJ.dir/flags.make

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o: CMakeFiles/BirthdatesUvaOJ.dir/flags.make
CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o -c /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/main.cpp

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/main.cpp > CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.i

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/main.cpp -o CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.s

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.requires

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.provides: CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BirthdatesUvaOJ.dir/build.make CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.provides

CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.provides.build: CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o


# Object files for target BirthdatesUvaOJ
BirthdatesUvaOJ_OBJECTS = \
"CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o"

# External object files for target BirthdatesUvaOJ
BirthdatesUvaOJ_EXTERNAL_OBJECTS =

BirthdatesUvaOJ.exe: CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o
BirthdatesUvaOJ.exe: CMakeFiles/BirthdatesUvaOJ.dir/build.make
BirthdatesUvaOJ.exe: CMakeFiles/BirthdatesUvaOJ.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BirthdatesUvaOJ.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BirthdatesUvaOJ.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BirthdatesUvaOJ.dir/build: BirthdatesUvaOJ.exe

.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/build

CMakeFiles/BirthdatesUvaOJ.dir/requires: CMakeFiles/BirthdatesUvaOJ.dir/main.cpp.o.requires

.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/requires

CMakeFiles/BirthdatesUvaOJ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BirthdatesUvaOJ.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/clean

CMakeFiles/BirthdatesUvaOJ.dir/depend:
	cd /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug /cygdrive/c/Users/Fredy/CLionProjects/BirthdatesUvaOJ/cmake-build-debug/CMakeFiles/BirthdatesUvaOJ.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BirthdatesUvaOJ.dir/depend
