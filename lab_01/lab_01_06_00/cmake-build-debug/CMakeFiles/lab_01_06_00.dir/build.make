# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "/Users/leonid/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/213.6777.58/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/leonid/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/213.6777.58/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_01_06_00.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab_01_06_00.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_01_06_00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_01_06_00.dir/flags.make

CMakeFiles/lab_01_06_00.dir/task6.c.o: CMakeFiles/lab_01_06_00.dir/flags.make
CMakeFiles/lab_01_06_00.dir/task6.c.o: ../task6.c
CMakeFiles/lab_01_06_00.dir/task6.c.o: CMakeFiles/lab_01_06_00.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab_01_06_00.dir/task6.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab_01_06_00.dir/task6.c.o -MF CMakeFiles/lab_01_06_00.dir/task6.c.o.d -o CMakeFiles/lab_01_06_00.dir/task6.c.o -c /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/task6.c

CMakeFiles/lab_01_06_00.dir/task6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab_01_06_00.dir/task6.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/task6.c > CMakeFiles/lab_01_06_00.dir/task6.c.i

CMakeFiles/lab_01_06_00.dir/task6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab_01_06_00.dir/task6.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/task6.c -o CMakeFiles/lab_01_06_00.dir/task6.c.s

# Object files for target lab_01_06_00
lab_01_06_00_OBJECTS = \
"CMakeFiles/lab_01_06_00.dir/task6.c.o"

# External object files for target lab_01_06_00
lab_01_06_00_EXTERNAL_OBJECTS =

lab_01_06_00: CMakeFiles/lab_01_06_00.dir/task6.c.o
lab_01_06_00: CMakeFiles/lab_01_06_00.dir/build.make
lab_01_06_00: CMakeFiles/lab_01_06_00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab_01_06_00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_01_06_00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_01_06_00.dir/build: lab_01_06_00
.PHONY : CMakeFiles/lab_01_06_00.dir/build

CMakeFiles/lab_01_06_00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_01_06_00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_01_06_00.dir/clean

CMakeFiles/lab_01_06_00.dir/depend:
	cd /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00 /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00 /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug /Users/leonid/Documents/bmstu/Прога/Си/laba1/lab_01_06_00/cmake-build-debug/CMakeFiles/lab_01_06_00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_01_06_00.dir/depend
