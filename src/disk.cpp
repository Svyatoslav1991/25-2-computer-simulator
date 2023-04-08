#include "disk.h"
#include <fstream>
#include <stdexcept>

void Disk::save(Ram& ram) const
{
	std::ofstream data("data.txt");

	if (data.is_open())
	{
		int64_t* arr = ram.read();
		for (int64_t i = 0; i < N; ++i)
		{
			data << arr[i] << " ";
		}

		data.close();
	}
	else
	{
		throw std::runtime_error("Can't open file data.txt for saving");
	}
}

//************************************************

void Disk::load(Ram& ram) const
{
	std::ifstream data("data.txt");

	if (data.is_open())
	{
		if (data.peek() == std::ifstream::traits_type::eof())
		{
			throw std::runtime_error("File data.txt is empty");
		}

		int64_t arr[N];

		for (int64_t i = 0; i < N; ++i)
		{
			data >> arr[i];
		}

		data.close();

		ram.write(arr);
	}
	else
	{
		throw std::runtime_error("Can't open file data.txt for reading");
	}
}