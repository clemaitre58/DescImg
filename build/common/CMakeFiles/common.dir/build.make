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
CMAKE_SOURCE_DIR = /home/cedric/Documents/Code/DescImg/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cedric/Documents/Code/DescImg/build

# Include any dependencies generated for this target.
include common/CMakeFiles/common.dir/depend.make

# Include the progress variables for this target.
include common/CMakeFiles/common.dir/progress.make

# Include the compile flags for this target's objects.
include common/CMakeFiles/common.dir/flags.make

common/CMakeFiles/common.dir/complex.cc.o: common/CMakeFiles/common.dir/flags.make
common/CMakeFiles/common.dir/complex.cc.o: /home/cedric/Documents/Code/DescImg/src/common/complex.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cedric/Documents/Code/DescImg/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object common/CMakeFiles/common.dir/complex.cc.o"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common.dir/complex.cc.o -c /home/cedric/Documents/Code/DescImg/src/common/complex.cc

common/CMakeFiles/common.dir/complex.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common.dir/complex.cc.i"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cedric/Documents/Code/DescImg/src/common/complex.cc > CMakeFiles/common.dir/complex.cc.i

common/CMakeFiles/common.dir/complex.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common.dir/complex.cc.s"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cedric/Documents/Code/DescImg/src/common/complex.cc -o CMakeFiles/common.dir/complex.cc.s

common/CMakeFiles/common.dir/complex.cc.o.requires:

.PHONY : common/CMakeFiles/common.dir/complex.cc.o.requires

common/CMakeFiles/common.dir/complex.cc.o.provides: common/CMakeFiles/common.dir/complex.cc.o.requires
	$(MAKE) -f common/CMakeFiles/common.dir/build.make common/CMakeFiles/common.dir/complex.cc.o.provides.build
.PHONY : common/CMakeFiles/common.dir/complex.cc.o.provides

common/CMakeFiles/common.dir/complex.cc.o.provides.build: common/CMakeFiles/common.dir/complex.cc.o


common/CMakeFiles/common.dir/csv_reader_fft.cc.o: common/CMakeFiles/common.dir/flags.make
common/CMakeFiles/common.dir/csv_reader_fft.cc.o: /home/cedric/Documents/Code/DescImg/src/common/csv_reader_fft.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cedric/Documents/Code/DescImg/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object common/CMakeFiles/common.dir/csv_reader_fft.cc.o"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common.dir/csv_reader_fft.cc.o -c /home/cedric/Documents/Code/DescImg/src/common/csv_reader_fft.cc

common/CMakeFiles/common.dir/csv_reader_fft.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common.dir/csv_reader_fft.cc.i"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cedric/Documents/Code/DescImg/src/common/csv_reader_fft.cc > CMakeFiles/common.dir/csv_reader_fft.cc.i

common/CMakeFiles/common.dir/csv_reader_fft.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common.dir/csv_reader_fft.cc.s"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cedric/Documents/Code/DescImg/src/common/csv_reader_fft.cc -o CMakeFiles/common.dir/csv_reader_fft.cc.s

common/CMakeFiles/common.dir/csv_reader_fft.cc.o.requires:

.PHONY : common/CMakeFiles/common.dir/csv_reader_fft.cc.o.requires

common/CMakeFiles/common.dir/csv_reader_fft.cc.o.provides: common/CMakeFiles/common.dir/csv_reader_fft.cc.o.requires
	$(MAKE) -f common/CMakeFiles/common.dir/build.make common/CMakeFiles/common.dir/csv_reader_fft.cc.o.provides.build
.PHONY : common/CMakeFiles/common.dir/csv_reader_fft.cc.o.provides

common/CMakeFiles/common.dir/csv_reader_fft.cc.o.provides.build: common/CMakeFiles/common.dir/csv_reader_fft.cc.o


common/CMakeFiles/common.dir/desc_fourier.cc.o: common/CMakeFiles/common.dir/flags.make
common/CMakeFiles/common.dir/desc_fourier.cc.o: /home/cedric/Documents/Code/DescImg/src/common/desc_fourier.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cedric/Documents/Code/DescImg/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object common/CMakeFiles/common.dir/desc_fourier.cc.o"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common.dir/desc_fourier.cc.o -c /home/cedric/Documents/Code/DescImg/src/common/desc_fourier.cc

common/CMakeFiles/common.dir/desc_fourier.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common.dir/desc_fourier.cc.i"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cedric/Documents/Code/DescImg/src/common/desc_fourier.cc > CMakeFiles/common.dir/desc_fourier.cc.i

common/CMakeFiles/common.dir/desc_fourier.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common.dir/desc_fourier.cc.s"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cedric/Documents/Code/DescImg/src/common/desc_fourier.cc -o CMakeFiles/common.dir/desc_fourier.cc.s

common/CMakeFiles/common.dir/desc_fourier.cc.o.requires:

.PHONY : common/CMakeFiles/common.dir/desc_fourier.cc.o.requires

common/CMakeFiles/common.dir/desc_fourier.cc.o.provides: common/CMakeFiles/common.dir/desc_fourier.cc.o.requires
	$(MAKE) -f common/CMakeFiles/common.dir/build.make common/CMakeFiles/common.dir/desc_fourier.cc.o.provides.build
.PHONY : common/CMakeFiles/common.dir/desc_fourier.cc.o.provides

common/CMakeFiles/common.dir/desc_fourier.cc.o.provides.build: common/CMakeFiles/common.dir/desc_fourier.cc.o


common/CMakeFiles/common.dir/fft.cc.o: common/CMakeFiles/common.dir/flags.make
common/CMakeFiles/common.dir/fft.cc.o: /home/cedric/Documents/Code/DescImg/src/common/fft.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cedric/Documents/Code/DescImg/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object common/CMakeFiles/common.dir/fft.cc.o"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common.dir/fft.cc.o -c /home/cedric/Documents/Code/DescImg/src/common/fft.cc

common/CMakeFiles/common.dir/fft.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common.dir/fft.cc.i"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cedric/Documents/Code/DescImg/src/common/fft.cc > CMakeFiles/common.dir/fft.cc.i

common/CMakeFiles/common.dir/fft.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common.dir/fft.cc.s"
	cd /home/cedric/Documents/Code/DescImg/build/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cedric/Documents/Code/DescImg/src/common/fft.cc -o CMakeFiles/common.dir/fft.cc.s

common/CMakeFiles/common.dir/fft.cc.o.requires:

.PHONY : common/CMakeFiles/common.dir/fft.cc.o.requires

common/CMakeFiles/common.dir/fft.cc.o.provides: common/CMakeFiles/common.dir/fft.cc.o.requires
	$(MAKE) -f common/CMakeFiles/common.dir/build.make common/CMakeFiles/common.dir/fft.cc.o.provides.build
.PHONY : common/CMakeFiles/common.dir/fft.cc.o.provides

common/CMakeFiles/common.dir/fft.cc.o.provides.build: common/CMakeFiles/common.dir/fft.cc.o


# Object files for target common
common_OBJECTS = \
"CMakeFiles/common.dir/complex.cc.o" \
"CMakeFiles/common.dir/csv_reader_fft.cc.o" \
"CMakeFiles/common.dir/desc_fourier.cc.o" \
"CMakeFiles/common.dir/fft.cc.o"

# External object files for target common
common_EXTERNAL_OBJECTS =

common/libcommon.a: common/CMakeFiles/common.dir/complex.cc.o
common/libcommon.a: common/CMakeFiles/common.dir/csv_reader_fft.cc.o
common/libcommon.a: common/CMakeFiles/common.dir/desc_fourier.cc.o
common/libcommon.a: common/CMakeFiles/common.dir/fft.cc.o
common/libcommon.a: common/CMakeFiles/common.dir/build.make
common/libcommon.a: common/CMakeFiles/common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cedric/Documents/Code/DescImg/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libcommon.a"
	cd /home/cedric/Documents/Code/DescImg/build/common && $(CMAKE_COMMAND) -P CMakeFiles/common.dir/cmake_clean_target.cmake
	cd /home/cedric/Documents/Code/DescImg/build/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/CMakeFiles/common.dir/build: common/libcommon.a

.PHONY : common/CMakeFiles/common.dir/build

common/CMakeFiles/common.dir/requires: common/CMakeFiles/common.dir/complex.cc.o.requires
common/CMakeFiles/common.dir/requires: common/CMakeFiles/common.dir/csv_reader_fft.cc.o.requires
common/CMakeFiles/common.dir/requires: common/CMakeFiles/common.dir/desc_fourier.cc.o.requires
common/CMakeFiles/common.dir/requires: common/CMakeFiles/common.dir/fft.cc.o.requires

.PHONY : common/CMakeFiles/common.dir/requires

common/CMakeFiles/common.dir/clean:
	cd /home/cedric/Documents/Code/DescImg/build/common && $(CMAKE_COMMAND) -P CMakeFiles/common.dir/cmake_clean.cmake
.PHONY : common/CMakeFiles/common.dir/clean

common/CMakeFiles/common.dir/depend:
	cd /home/cedric/Documents/Code/DescImg/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cedric/Documents/Code/DescImg/src /home/cedric/Documents/Code/DescImg/src/common /home/cedric/Documents/Code/DescImg/build /home/cedric/Documents/Code/DescImg/build/common /home/cedric/Documents/Code/DescImg/build/common/CMakeFiles/common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/CMakeFiles/common.dir/depend

