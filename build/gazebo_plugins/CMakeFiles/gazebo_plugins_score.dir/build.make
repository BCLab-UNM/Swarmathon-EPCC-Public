# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins

# Include any dependencies generated for this target.
include CMakeFiles/gazebo_plugins_score.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gazebo_plugins_score.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gazebo_plugins_score.dir/flags.make

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o: CMakeFiles/gazebo_plugins_score.dir/flags.make
CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o: /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins/src/ScorePlugin/ScorePlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o -c /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins/src/ScorePlugin/ScorePlugin.cpp

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins/src/ScorePlugin/ScorePlugin.cpp > CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.i

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins/src/ScorePlugin/ScorePlugin.cpp -o CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.s

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.requires:

.PHONY : CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.requires

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.provides: CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.requires
	$(MAKE) -f CMakeFiles/gazebo_plugins_score.dir/build.make CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.provides.build
.PHONY : CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.provides

CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.provides.build: CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o


# Object files for target gazebo_plugins_score
gazebo_plugins_score_OBJECTS = \
"CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o"

# External object files for target gazebo_plugins_score
gazebo_plugins_score_EXTERNAL_OBJECTS =

/home/timeinvestor2/SwarmBaseCode-ROS/devel/.private/gazebo_plugins/lib/libgazebo_plugins_score.so: CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o
/home/timeinvestor2/SwarmBaseCode-ROS/devel/.private/gazebo_plugins/lib/libgazebo_plugins_score.so: CMakeFiles/gazebo_plugins_score.dir/build.make
/home/timeinvestor2/SwarmBaseCode-ROS/devel/.private/gazebo_plugins/lib/libgazebo_plugins_score.so: CMakeFiles/gazebo_plugins_score.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/timeinvestor2/SwarmBaseCode-ROS/devel/.private/gazebo_plugins/lib/libgazebo_plugins_score.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gazebo_plugins_score.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gazebo_plugins_score.dir/build: /home/timeinvestor2/SwarmBaseCode-ROS/devel/.private/gazebo_plugins/lib/libgazebo_plugins_score.so

.PHONY : CMakeFiles/gazebo_plugins_score.dir/build

CMakeFiles/gazebo_plugins_score.dir/requires: CMakeFiles/gazebo_plugins_score.dir/src/ScorePlugin/ScorePlugin.cpp.o.requires

.PHONY : CMakeFiles/gazebo_plugins_score.dir/requires

CMakeFiles/gazebo_plugins_score.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gazebo_plugins_score.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gazebo_plugins_score.dir/clean

CMakeFiles/gazebo_plugins_score.dir/depend:
	cd /home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins /home/timeinvestor2/SwarmBaseCode-ROS/src/gazebo_plugins /home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins /home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins /home/timeinvestor2/SwarmBaseCode-ROS/build/gazebo_plugins/CMakeFiles/gazebo_plugins_score.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gazebo_plugins_score.dir/depend

