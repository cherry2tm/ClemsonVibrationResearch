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
include src/sim/CMakeFiles/obdsim_dltest.dir/depend.make

# Include the progress variables for this target.
include src/sim/CMakeFiles/obdsim_dltest.dir/progress.make

# Include the compile flags for this target's objects.
include src/sim/CMakeFiles/obdsim_dltest.dir/flags.make

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o: src/sim/CMakeFiles/obdsim_dltest.dir/flags.make
src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o: ../src/sim/generators/dlopen/test/test_dlopen.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o   -c /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/sim/generators/dlopen/test/test_dlopen.c

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.i"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/sim/generators/dlopen/test/test_dlopen.c > CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.i

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.s"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/sim/generators/dlopen/test/test_dlopen.c -o CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.s

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.requires:
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.requires

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.provides: src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.requires
	$(MAKE) -f src/sim/CMakeFiles/obdsim_dltest.dir/build.make src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.provides.build
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.provides

src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.provides.build: src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o

# Object files for target obdsim_dltest
obdsim_dltest_OBJECTS = \
"CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o"

# External object files for target obdsim_dltest
obdsim_dltest_EXTERNAL_OBJECTS =

src/sim/libobdsim_dltest.so: src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o
src/sim/libobdsim_dltest.so: src/sim/CMakeFiles/obdsim_dltest.dir/build.make
src/sim/libobdsim_dltest.so: src/sim/CMakeFiles/obdsim_dltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared module libobdsim_dltest.so"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/obdsim_dltest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/sim/CMakeFiles/obdsim_dltest.dir/build: src/sim/libobdsim_dltest.so
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/build

src/sim/CMakeFiles/obdsim_dltest.dir/requires: src/sim/CMakeFiles/obdsim_dltest.dir/generators/dlopen/test/test_dlopen.c.o.requires
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/requires

src/sim/CMakeFiles/obdsim_dltest.dir/clean:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim && $(CMAKE_COMMAND) -P CMakeFiles/obdsim_dltest.dir/cmake_clean.cmake
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/clean

src/sim/CMakeFiles/obdsim_dltest.dir/depend:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anthony/ClemsonVibrationResearch/obdgpslogger /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/sim /home/anthony/ClemsonVibrationResearch/obdgpslogger/build /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/sim/CMakeFiles/obdsim_dltest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/sim/CMakeFiles/obdsim_dltest.dir/depend

