# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.3.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.3.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK

# Include any dependencies generated for this target.
include glfw-3.1.1/tests/CMakeFiles/title.dir/depend.make

# Include the progress variables for this target.
include glfw-3.1.1/tests/CMakeFiles/title.dir/progress.make

# Include the compile flags for this target's objects.
include glfw-3.1.1/tests/CMakeFiles/title.dir/flags.make

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o: glfw-3.1.1/tests/CMakeFiles/title.dir/flags.make
glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o: glfw-3.1.1/tests/title.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/title.dir/title.c.o   -c /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests/title.c

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/title.dir/title.c.i"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests/title.c > CMakeFiles/title.dir/title.c.i

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/title.dir/title.c.s"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests/title.c -o CMakeFiles/title.dir/title.c.s

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.requires:

.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.requires

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.provides: glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.requires
	$(MAKE) -f glfw-3.1.1/tests/CMakeFiles/title.dir/build.make glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.provides.build
.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.provides

glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.provides.build: glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o


# Object files for target title
title_OBJECTS = \
"CMakeFiles/title.dir/title.c.o"

# External object files for target title
title_EXTERNAL_OBJECTS =

glfw-3.1.1/tests/title.app/Contents/MacOS/title: glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o
glfw-3.1.1/tests/title.app/Contents/MacOS/title: glfw-3.1.1/tests/CMakeFiles/title.dir/build.make
glfw-3.1.1/tests/title.app/Contents/MacOS/title: lib/libglfw.a
glfw-3.1.1/tests/title.app/Contents/MacOS/title: glfw-3.1.1/tests/CMakeFiles/title.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable title.app/Contents/MacOS/title"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/title.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glfw-3.1.1/tests/CMakeFiles/title.dir/build: glfw-3.1.1/tests/title.app/Contents/MacOS/title

.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/build

glfw-3.1.1/tests/CMakeFiles/title.dir/requires: glfw-3.1.1/tests/CMakeFiles/title.dir/title.c.o.requires

.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/requires

glfw-3.1.1/tests/CMakeFiles/title.dir/clean:
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests && $(CMAKE_COMMAND) -P CMakeFiles/title.dir/cmake_clean.cmake
.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/clean

glfw-3.1.1/tests/CMakeFiles/title.dir/depend:
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/tests/CMakeFiles/title.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glfw-3.1.1/tests/CMakeFiles/title.dir/depend
