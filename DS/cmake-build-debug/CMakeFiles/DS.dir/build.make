# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/158/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/158/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/crazypig/CLionProjects/DS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/crazypig/CLionProjects/DS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DS.dir/flags.make

CMakeFiles/DS.dir/linerList/test.c.o: CMakeFiles/DS.dir/flags.make
CMakeFiles/DS.dir/linerList/test.c.o: ../linerList/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/crazypig/CLionProjects/DS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DS.dir/linerList/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DS.dir/linerList/test.c.o -c /home/crazypig/CLionProjects/DS/linerList/test.c

CMakeFiles/DS.dir/linerList/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DS.dir/linerList/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/crazypig/CLionProjects/DS/linerList/test.c > CMakeFiles/DS.dir/linerList/test.c.i

CMakeFiles/DS.dir/linerList/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DS.dir/linerList/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/crazypig/CLionProjects/DS/linerList/test.c -o CMakeFiles/DS.dir/linerList/test.c.s

CMakeFiles/DS.dir/tree/test.c.o: CMakeFiles/DS.dir/flags.make
CMakeFiles/DS.dir/tree/test.c.o: ../tree/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/crazypig/CLionProjects/DS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DS.dir/tree/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DS.dir/tree/test.c.o -c /home/crazypig/CLionProjects/DS/tree/test.c

CMakeFiles/DS.dir/tree/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DS.dir/tree/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/crazypig/CLionProjects/DS/tree/test.c > CMakeFiles/DS.dir/tree/test.c.i

CMakeFiles/DS.dir/tree/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DS.dir/tree/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/crazypig/CLionProjects/DS/tree/test.c -o CMakeFiles/DS.dir/tree/test.c.s

# Object files for target DS
DS_OBJECTS = \
"CMakeFiles/DS.dir/linerList/test.c.o" \
"CMakeFiles/DS.dir/tree/test.c.o"

# External object files for target DS
DS_EXTERNAL_OBJECTS =

DS: CMakeFiles/DS.dir/linerList/test.c.o
DS: CMakeFiles/DS.dir/tree/test.c.o
DS: CMakeFiles/DS.dir/build.make
DS: CMakeFiles/DS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/crazypig/CLionProjects/DS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable DS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DS.dir/build: DS

.PHONY : CMakeFiles/DS.dir/build

CMakeFiles/DS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DS.dir/clean

CMakeFiles/DS.dir/depend:
	cd /home/crazypig/CLionProjects/DS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/crazypig/CLionProjects/DS /home/crazypig/CLionProjects/DS /home/crazypig/CLionProjects/DS/cmake-build-debug /home/crazypig/CLionProjects/DS/cmake-build-debug /home/crazypig/CLionProjects/DS/cmake-build-debug/CMakeFiles/DS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DS.dir/depend

