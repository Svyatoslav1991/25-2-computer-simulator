#include "kbd.h"

void Kbd::input(Ram& ram)
{
	std::cout << "Enter " << N << " numbers\n";
	int64_t arr[N];
	for (int64_t i = 0; i < N; ++i)
	{
		std::cout << "Value " << i + 1 << "\n";
		arr[i] = myCin<int64_t>();
	}

	ram.write(arr);
}