# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/arkin/cpp/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arkin/cpp/test/build

# Include any dependencies generated for this target.
include CMakeFiles/todo_exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/todo_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/todo_exe.dir/flags.make

CMakeFiles/todo_exe.dir/main.cc.o: CMakeFiles/todo_exe.dir/flags.make
CMakeFiles/todo_exe.dir/main.cc.o: ../main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arkin/cpp/test/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/todo_exe.dir/main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/todo_exe.dir/main.cc.o -c /home/arkin/cpp/test/main.cc

CMakeFiles/todo_exe.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/todo_exe.dir/main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/arkin/cpp/test/main.cc > CMakeFiles/todo_exe.dir/main.cc.i

CMakeFiles/todo_exe.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/todo_exe.dir/main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/arkin/cpp/test/main.cc -o CMakeFiles/todo_exe.dir/main.cc.s

CMakeFiles/todo_exe.dir/main.cc.o.requires:
.PHONY : CMakeFiles/todo_exe.dir/main.cc.o.requires

CMakeFiles/todo_exe.dir/main.cc.o.provides: CMakeFiles/todo_exe.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/todo_exe.dir/build.make CMakeFiles/todo_exe.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/todo_exe.dir/main.cc.o.provides

CMakeFiles/todo_exe.dir/main.cc.o.provides.build: CMakeFiles/todo_exe.dir/main.cc.o

CMakeFiles/todo_exe.dir/todo.cc.o: CMakeFiles/todo_exe.dir/flags.make
CMakeFiles/todo_exe.dir/todo.cc.o: ../todo.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arkin/cpp/test/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/todo_exe.dir/todo.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/todo_exe.dir/todo.cc.o -c /home/arkin/cpp/test/todo.cc

CMakeFiles/todo_exe.dir/todo.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/todo_exe.dir/todo.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/arkin/cpp/test/todo.cc > CMakeFiles/todo_exe.dir/todo.cc.i

CMakeFiles/todo_exe.dir/todo.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/todo_exe.dir/todo.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/arkin/cpp/test/todo.cc -o CMakeFiles/todo_exe.dir/todo.cc.s

CMakeFiles/todo_exe.dir/todo.cc.o.requires:
.PHONY : CMakeFiles/todo_exe.dir/todo.cc.o.requires

CMakeFiles/todo_exe.dir/todo.cc.o.provides: CMakeFiles/todo_exe.dir/todo.cc.o.requires
	$(MAKE) -f CMakeFiles/todo_exe.dir/build.make CMakeFiles/todo_exe.dir/todo.cc.o.provides.build
.PHONY : CMakeFiles/todo_exe.dir/todo.cc.o.provides

CMakeFiles/todo_exe.dir/todo.cc.o.provides.build: CMakeFiles/todo_exe.dir/todo.cc.o

# Object files for target todo_exe
todo_exe_OBJECTS = \
"CMakeFiles/todo_exe.dir/main.cc.o" \
"CMakeFiles/todo_exe.dir/todo.cc.o"

# External object files for target todo_exe
todo_exe_EXTERNAL_OBJECTS =

todo_exe: CMakeFiles/todo_exe.dir/main.cc.o
todo_exe: CMakeFiles/todo_exe.dir/todo.cc.o
todo_exe: CMakeFiles/todo_exe.dir/build.make
todo_exe: CMakeFiles/todo_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable todo_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/todo_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/todo_exe.dir/build: todo_exe
.PHONY : CMakeFiles/todo_exe.dir/build

CMakeFiles/todo_exe.dir/requires: CMakeFiles/todo_exe.dir/main.cc.o.requires
CMakeFiles/todo_exe.dir/requires: CMakeFiles/todo_exe.dir/todo.cc.o.requires
.PHONY : CMakeFiles/todo_exe.dir/requires

CMakeFiles/todo_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/todo_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/todo_exe.dir/clean

CMakeFiles/todo_exe.dir/depend:
	cd /home/arkin/cpp/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arkin/cpp/test /home/arkin/cpp/test /home/arkin/cpp/test/build /home/arkin/cpp/test/build /home/arkin/cpp/test/build/CMakeFiles/todo_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/todo_exe.dir/depend
