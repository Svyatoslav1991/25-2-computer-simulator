#include "gpu.h"

void Gpu::show(Ram& ram) const
{
	int64_t* arr = ram.read();
	for (int64_t i = 0; i < N; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}