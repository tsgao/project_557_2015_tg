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
include glfw-3.1.1/examples/CMakeFiles/Particles.dir/depend.make

# Include the progress variables for this target.
include glfw-3.1.1/examples/CMakeFiles/Particles.dir/progress.make

# Include the compile flags for this target's objects.
include glfw-3.1.1/examples/CMakeFiles/Particles.dir/flags.make

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o: glfw-3.1.1/examples/CMakeFiles/Particles.dir/flags.make
glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o: glfw-3.1.1/examples/particles.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/Particles.dir/particles.c.o   -c /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples/particles.c

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Particles.dir/particles.c.i"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples/particles.c > CMakeFiles/Particles.dir/particles.c.i

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Particles.dir/particles.c.s"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples/particles.c -o CMakeFiles/Particles.dir/particles.c.s

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.requires:

.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.requires

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.provides: glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.requires
	$(MAKE) -f glfw-3.1.1/examples/CMakeFiles/Particles.dir/build.make glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.provides.build
.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.provides

glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.provides.build: glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o


glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o: glfw-3.1.1/examples/CMakeFiles/Particles.dir/flags.make
glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o: glfw-3.1.1/deps/tinycthread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/Particles.dir/__/deps/tinycthread.c.o   -c /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/deps/tinycthread.c

glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Particles.dir/__/deps/tinycthread.c.i"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/deps/tinycthread.c > CMakeFiles/Particles.dir/__/deps/tinycthread.c.i

glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Particles.dir/__/deps/tinycthread.c.s"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/deps/tinycthread.c -o CMakeFiles/Particles.dir/__/deps/tinycthread.c.s

glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.requires:

.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.requires

glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.provides: glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.requires
	$(MAKE) -f glfw-3.1.1/examples/CMakeFiles/Particles.dir/build.make glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.provides.build
.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.provides

glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.provides.build: glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o


# Object files for target Particles
Particles_OBJECTS = \
"CMakeFiles/Particles.dir/particles.c.o" \
"CMakeFiles/Particles.dir/__/deps/tinycthread.c.o"

# External object files for target Particles
Particles_EXTERNAL_OBJECTS =

glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles: glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o
glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles: glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o
glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles: glfw-3.1.1/examples/CMakeFiles/Particles.dir/build.make
glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles: lib/libglfw.a
glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles: glfw-3.1.1/examples/CMakeFiles/Particles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Particles.app/Contents/MacOS/Particles"
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Particles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glfw-3.1.1/examples/CMakeFiles/Particles.dir/build: glfw-3.1.1/examples/Particles.app/Contents/MacOS/Particles

.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/build

glfw-3.1.1/examples/CMakeFiles/Particles.dir/requires: glfw-3.1.1/examples/CMakeFiles/Particles.dir/particles.c.o.requires
glfw-3.1.1/examples/CMakeFiles/Particles.dir/requires: glfw-3.1.1/examples/CMakeFiles/Particles.dir/__/deps/tinycthread.c.o.requires

.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/requires

glfw-3.1.1/examples/CMakeFiles/Particles.dir/clean:
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples && $(CMAKE_COMMAND) -P CMakeFiles/Particles.dir/cmake_clean.cmake
.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/clean

glfw-3.1.1/examples/CMakeFiles/Particles.dir/depend:
	cd /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples /Users/pro/Desktop/Fall2015/COMS557/HCI-557-CG/SDK/glfw-3.1.1/examples/CMakeFiles/Particles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glfw-3.1.1/examples/CMakeFiles/Particles.dir/depend
