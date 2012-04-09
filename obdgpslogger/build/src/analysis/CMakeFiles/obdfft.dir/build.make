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
include src/analysis/CMakeFiles/obdfft.dir/depend.make

# Include the progress variables for this target.
include src/analysis/CMakeFiles/obdfft.dir/progress.make

# Include the compile flags for this target's objects.
include src/analysis/CMakeFiles/obdfft.dir/flags.make

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o: src/analysis/CMakeFiles/obdfft.dir/flags.make
src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o: ../src/analysis/fftmain.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/obdfft.dir/fftmain.cpp.o -c /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/fftmain.cpp

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obdfft.dir/fftmain.cpp.i"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/fftmain.cpp > CMakeFiles/obdfft.dir/fftmain.cpp.i

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obdfft.dir/fftmain.cpp.s"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis/fftmain.cpp -o CMakeFiles/obdfft.dir/fftmain.cpp.s

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.requires:
.PHONY : src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.requires

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.provides: src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.requires
	$(MAKE) -f src/analysis/CMakeFiles/obdfft.dir/build.make src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.provides.build
.PHONY : src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.provides

src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.provides.build: src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o

# Object files for target obdfft
obdfft_OBJECTS = \
"CMakeFiles/obdfft.dir/fftmain.cpp.o"

# External object files for target obdfft
obdfft_EXTERNAL_OBJECTS =

../bin/obdfft: src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o
../bin/obdfft: src/analysis/libckobdfft.a
../bin/obdfft: libs/sqlite3/libcksqlite.a
../bin/obdfft: src/obdinfo/libckobdinfo.a
../bin/obdfft: /usr/lib/i386-linux-gnu/libfltk.a
../bin/obdfft: /usr/lib/i386-linux-gnu/libX11.so
../bin/obdfft: /usr/lib/i386-linux-gnu/libXext.so
../bin/obdfft: /usr/lib/i386-linux-gnu/libm.so
../bin/obdfft: /usr/lib/./libfftw3.so
../bin/obdfft: src/analysis/CMakeFiles/obdfft.dir/build.make
../bin/obdfft: src/analysis/CMakeFiles/obdfft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/obdfft"
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/obdfft.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/analysis/CMakeFiles/obdfft.dir/build: ../bin/obdfft
.PHONY : src/analysis/CMakeFiles/obdfft.dir/build

src/analysis/CMakeFiles/obdfft.dir/requires: src/analysis/CMakeFiles/obdfft.dir/fftmain.cpp.o.requires
.PHONY : src/analysis/CMakeFiles/obdfft.dir/requires

src/analysis/CMakeFiles/obdfft.dir/clean:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis && $(CMAKE_COMMAND) -P CMakeFiles/obdfft.dir/cmake_clean.cmake
.PHONY : src/analysis/CMakeFiles/obdfft.dir/clean

src/analysis/CMakeFiles/obdfft.dir/depend:
	cd /home/anthony/ClemsonVibrationResearch/obdgpslogger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anthony/ClemsonVibrationResearch/obdgpslogger /home/anthony/ClemsonVibrationResearch/obdgpslogger/src/analysis /home/anthony/ClemsonVibrationResearch/obdgpslogger/build /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis /home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis/CMakeFiles/obdfft.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/analysis/CMakeFiles/obdfft.dir/depend

