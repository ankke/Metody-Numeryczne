# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/zad3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zad3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zad3.dir/flags.make

CMakeFiles/zad3.dir/main.c.obj: CMakeFiles/zad3.dir/flags.make
CMakeFiles/zad3.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/zad3.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\zad3.dir\main.c.obj   -c "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\main.c"

CMakeFiles/zad3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zad3.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\main.c" > CMakeFiles\zad3.dir\main.c.i

CMakeFiles/zad3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zad3.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\main.c" -o CMakeFiles\zad3.dir\main.c.s

# Object files for target zad3
zad3_OBJECTS = \
"CMakeFiles/zad3.dir/main.c.obj"

# External object files for target zad3
zad3_EXTERNAL_OBJECTS =

zad3.exe: CMakeFiles/zad3.dir/main.c.obj
zad3.exe: CMakeFiles/zad3.dir/build.make
zad3.exe: CMakeFiles/zad3.dir/linklibs.rsp
zad3.exe: CMakeFiles/zad3.dir/objects1.rsp
zad3.exe: CMakeFiles/zad3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable zad3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zad3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zad3.dir/build: zad3.exe

.PHONY : CMakeFiles/zad3.dir/build

CMakeFiles/zad3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zad3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zad3.dir/clean

CMakeFiles/zad3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3" "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3" "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug" "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug" "C:\Users\Aneczka\Desktop\studia\INFA\4. semestr\mownit\zad3\cmake-build-debug\CMakeFiles\zad3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/zad3.dir/depend

