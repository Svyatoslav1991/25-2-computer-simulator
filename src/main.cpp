#include <string>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main(){
	std::cout << "\tTASK 25.2 COMPUTER SIMULATOR\n\n";

	Ram ram;
	Cpu cpu;
	Disk disk;
	Gpu gpu;
	Kbd kbd;

	std::string action;

	std::cout << "Work program with " << N << " numbers\n";

	try
	{
		while (action != "exit")
		{
			std::cout << "\nEnter \"sum\" to calculate sum of numbers\n";
			std::cout << "Enter \"save\" to save data to file\n";
			std::cout << "Enter \"load\" to load data from file\n";
			std::cout << "Enter \"input\" to enter data from the keyboard\n";
			std::cout << "Enter \"display\" to display data on screen\n";
			std::cout << "Enter \"exit\" to quit programm\n";
			action = myCin<decltype(action)>();

			if (action == "sum")
			{
				std::cout << "The sum of all numbers is " << cpu.compute(ram) << "\n";
			}
			else if (action == "save")
			{
				disk.save(ram);
				std::cout << "Data saved in file\n";
			}
			else if (action == "load")
			{
				disk.load(ram);
				std::cout << "Data loaded from file\n";
			}
			else if (action == "input")
			{
				kbd.input(ram);
			}
			else if (action == "display")
			{
				gpu.show(ram);
			}
			else if (action != "exit")
			{
				std::cerr << "You entered something wrong. Try again\n";
			}
		}
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << "\n";
	}
	catch (...)
	{
		std::cout << "Someting went wrong\n";
	}
	

	return 0;
}