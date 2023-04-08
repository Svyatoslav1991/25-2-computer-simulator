# 25-2-computer-simulator

Implement a simple personal computer model as a multi-module project.
There are several basic conditional components in a computer.
The central processing unit (cpu) - must have a compute function that adds 8 numbers from the RAM buffer (see below) and prints the result to the console.
RAM (ram) - contains a buffer for 8 integers that can be filled with the write function and read by the read function.
Hard disk (disk) - has two functions, save and load.
The save function must save the state of 8 numbers from RAM to permanent storage in the data.txt file.
The load function is to load them from the media into RAM.
Graphic card (gpu) - displays 8 numbers from RAM to the console.
Keyboard (kbd) - allows you to enter 8 numbers and place them in RAM.
Each component should be located in a separate module, with a separate header file.
The main module of the program (main.cpp) must read the user input of a command that corresponds to individual device functions: sum (calculate the sum), save (save to file), load (load from file), input (enter from the keyboard), display (output on the screen). The exit command exits the program.
