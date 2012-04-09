# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anthony/ClemsonVibrationResearch/obdgpslogger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anthony/ClemsonVibrationResearch/obdgpslogger/build

# Include any dependencies generated for this target.
include src/analysis/CMakeFiles/obdboxwhisker.dir/depend.make

# Include the progress variables for this target.
include src/analysis/CMakeFiles/obdboxwhisker.dir/progress.make

# Include the compile flags for this target's objects.
include src/analysis/CMakeFiles/obdboxwhisker.dir/flags.make

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o: src/analysis/CMakeFiles/obdboxwhisker.dir/flags.make
src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o: ../src/analysis/boxwhisker.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o   -c /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/boxwhisker.c

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obdboxwhisker.dir/boxwhisker.c.i"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/boxwhisker.c > CMakeFiles/obdboxwhisker.dir/boxwhisker.c.i

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obdboxwhisker.dir/boxwhisker.c.s"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/boxwhisker.c -o CMakeFiles/obdboxwhisker.dir/boxwhisker.c.s

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.requires:
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.requires

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.provides: src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.requires
	$(MAKE) -f src/analysis/CMakeFiles/obdboxwhisker.dir/build.make src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.provides.build
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.provides

src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.provides.build: src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o

# Object files for target obdboxwhisker
obdboxwhisker_OBJECTS = \
"CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o"

# External object files for target obdboxwhisker
obdboxwhisker_EXTERNAL_OBJECTS =

../bin/obdboxwhisker: src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o
../bin/obdboxwhisker: libs/sqlite3/libcksqlite.a
../bin/obdboxwhisker: src/obdinfo/libckobdinfo.a
../bin/obdboxwhisker: src/analysis/CMakeFiles/obdboxwhisker.dir/build.make
../bin/obdboxwhisker: src/analysis/CMakeFiles/obdboxwhisker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../../../bin/obdboxwhisker"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/obdboxwhisker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/analysis/CMakeFiles/obdboxwhisker.dir/build: ../bin/obdboxwhisker
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/build

src/analysis/CMakeFiles/obdboxwhisker.dir/requires: src/analysis/CMakeFiles/obdboxwhisker.dir/boxwhisker.c.o.requires
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/requires

src/analysis/CMakeFiles/obdboxwhisker.dir/clean:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && $(CMAKE_COMMAND) -P CMakeFiles/obdboxwhisker.dir/cmake_clean.cmake
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/clean

src/analysis/CMakeFiles/obdboxwhisker.dir/depend:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anthony/ClemsonVibrationResearch/obdgpslogger /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis /home/anthony/ClemsonVibrationResearch/obdgpslogger/build /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis/CMakeFiles/obdboxwhisker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/analysis/CMakeFiles/obdboxwhisker.dir/depend

