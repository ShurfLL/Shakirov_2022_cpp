# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /home/timur/.local/share/JetBrains/Toolbox/apps/CLion/ch0/221.5080.224/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/timur/.local/share/JetBrains/Toolbox/apps/CLion/ch0/221.5080.224/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/timur/git projects/cpp/greedy"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/timur/git projects/cpp/greedy/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/greedy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/greedy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/greedy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/greedy.dir/flags.make

CMakeFiles/greedy.dir/5.cpp.o: CMakeFiles/greedy.dir/flags.make
CMakeFiles/greedy.dir/5.cpp.o: ../5.cpp
CMakeFiles/greedy.dir/5.cpp.o: CMakeFiles/greedy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/timur/git projects/cpp/greedy/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/greedy.dir/5.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/greedy.dir/5.cpp.o -MF CMakeFiles/greedy.dir/5.cpp.o.d -o CMakeFiles/greedy.dir/5.cpp.o -c "/home/timur/git projects/cpp/greedy/5.cpp"

CMakeFiles/greedy.dir/5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/greedy.dir/5.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/timur/git projects/cpp/greedy/5.cpp" > CMakeFiles/greedy.dir/5.cpp.i

CMakeFiles/greedy.dir/5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/greedy.dir/5.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/timur/git projects/cpp/greedy/5.cpp" -o CMakeFiles/greedy.dir/5.cpp.s

# Object files for target greedy
greedy_OBJECTS = \
"CMakeFiles/greedy.dir/5.cpp.o"

# External object files for target greedy
greedy_EXTERNAL_OBJECTS =

greedy: CMakeFiles/greedy.dir/5.cpp.o
greedy: CMakeFiles/greedy.dir/build.make
greedy: CMakeFiles/greedy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/timur/git projects/cpp/greedy/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable greedy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/greedy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/greedy.dir/build: greedy
.PHONY : CMakeFiles/greedy.dir/build

CMakeFiles/greedy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/greedy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/greedy.dir/clean

CMakeFiles/greedy.dir/depend:
	cd "/home/timur/git projects/cpp/greedy/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/timur/git projects/cpp/greedy" "/home/timur/git projects/cpp/greedy" "/home/timur/git projects/cpp/greedy/cmake-build-debug" "/home/timur/git projects/cpp/greedy/cmake-build-debug" "/home/timur/git projects/cpp/greedy/cmake-build-debug/CMakeFiles/greedy.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/greedy.dir/depend

