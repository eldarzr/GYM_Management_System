# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/spl211/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/spl211/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/spl211/CLionProjects/SPL_HW1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/spl211/CLionProjects/SPL_HW1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SPL_HW1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SPL_HW1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SPL_HW1.dir/flags.make

CMakeFiles/SPL_HW1.dir/src/main.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SPL_HW1.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/main.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/main.cpp

CMakeFiles/SPL_HW1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/main.cpp > CMakeFiles/SPL_HW1.dir/src/main.cpp.i

CMakeFiles/SPL_HW1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/main.cpp -o CMakeFiles/SPL_HW1.dir/src/main.cpp.s

CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o: ../src/Workout.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/Workout.cpp

CMakeFiles/SPL_HW1.dir/src/Workout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/Workout.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/Workout.cpp > CMakeFiles/SPL_HW1.dir/src/Workout.cpp.i

CMakeFiles/SPL_HW1.dir/src/Workout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/Workout.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/Workout.cpp -o CMakeFiles/SPL_HW1.dir/src/Workout.cpp.s

CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o: ../src/Customer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/Customer.cpp

CMakeFiles/SPL_HW1.dir/src/Customer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/Customer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/Customer.cpp > CMakeFiles/SPL_HW1.dir/src/Customer.cpp.i

CMakeFiles/SPL_HW1.dir/src/Customer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/Customer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/Customer.cpp -o CMakeFiles/SPL_HW1.dir/src/Customer.cpp.s

CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o: ../src/SweatyCustomer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/SweatyCustomer.cpp

CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/SweatyCustomer.cpp > CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.i

CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/SweatyCustomer.cpp -o CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.s

CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o: ../src/CheapCustomer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/CheapCustomer.cpp

CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/CheapCustomer.cpp > CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.i

CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/CheapCustomer.cpp -o CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.s

CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o: ../src/Trainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/Trainer.cpp

CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/Trainer.cpp > CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.i

CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/Trainer.cpp -o CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.s

CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o: ../src/BaseAction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/BaseAction.cpp

CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/BaseAction.cpp > CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.i

CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/BaseAction.cpp -o CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.s

CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o: ../src/OpenTrainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/OpenTrainer.cpp

CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/OpenTrainer.cpp > CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.i

CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/OpenTrainer.cpp -o CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.s

CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o: ../src/Studio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/Studio.cpp

CMakeFiles/SPL_HW1.dir/src/Studio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/Studio.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/Studio.cpp > CMakeFiles/SPL_HW1.dir/src/Studio.cpp.i

CMakeFiles/SPL_HW1.dir/src/Studio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/Studio.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/Studio.cpp -o CMakeFiles/SPL_HW1.dir/src/Studio.cpp.s

CMakeFiles/SPL_HW1.dir/src/Order.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/Order.cpp.o: ../src/Order.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SPL_HW1.dir/src/Order.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/Order.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/Order.cpp

CMakeFiles/SPL_HW1.dir/src/Order.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/Order.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/Order.cpp > CMakeFiles/SPL_HW1.dir/src/Order.cpp.i

CMakeFiles/SPL_HW1.dir/src/Order.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/Order.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/Order.cpp -o CMakeFiles/SPL_HW1.dir/src/Order.cpp.s

CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o: ../src/HeavyMuscleCustomer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/HeavyMuscleCustomer.cpp

CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/HeavyMuscleCustomer.cpp > CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.i

CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/HeavyMuscleCustomer.cpp -o CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.s

CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o: ../src/FullBodyCustomer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/FullBodyCustomer.cpp

CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/FullBodyCustomer.cpp > CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.i

CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/FullBodyCustomer.cpp -o CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.s

CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o: ../src/MoveCustomer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/MoveCustomer.cpp

CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/MoveCustomer.cpp > CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.i

CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/MoveCustomer.cpp -o CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.s

CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o: CMakeFiles/SPL_HW1.dir/flags.make
CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o: ../src/PrintTrainerStatus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o -c /home/spl211/CLionProjects/SPL_HW1/src/PrintTrainerStatus.cpp

CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spl211/CLionProjects/SPL_HW1/src/PrintTrainerStatus.cpp > CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.i

CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spl211/CLionProjects/SPL_HW1/src/PrintTrainerStatus.cpp -o CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.s

# Object files for target SPL_HW1
SPL_HW1_OBJECTS = \
"CMakeFiles/SPL_HW1.dir/src/main.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/Order.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o" \
"CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o"

# External object files for target SPL_HW1
SPL_HW1_EXTERNAL_OBJECTS =

SPL_HW1: CMakeFiles/SPL_HW1.dir/src/main.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/Workout.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/Customer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/SweatyCustomer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/CheapCustomer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/Trainer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/BaseAction.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/OpenTrainer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/Studio.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/Order.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/HeavyMuscleCustomer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/FullBodyCustomer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/MoveCustomer.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/src/PrintTrainerStatus.cpp.o
SPL_HW1: CMakeFiles/SPL_HW1.dir/build.make
SPL_HW1: CMakeFiles/SPL_HW1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable SPL_HW1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SPL_HW1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SPL_HW1.dir/build: SPL_HW1
.PHONY : CMakeFiles/SPL_HW1.dir/build

CMakeFiles/SPL_HW1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SPL_HW1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SPL_HW1.dir/clean

CMakeFiles/SPL_HW1.dir/depend:
	cd /home/spl211/CLionProjects/SPL_HW1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/spl211/CLionProjects/SPL_HW1 /home/spl211/CLionProjects/SPL_HW1 /home/spl211/CLionProjects/SPL_HW1/cmake-build-debug /home/spl211/CLionProjects/SPL_HW1/cmake-build-debug /home/spl211/CLionProjects/SPL_HW1/cmake-build-debug/CMakeFiles/SPL_HW1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SPL_HW1.dir/depend

