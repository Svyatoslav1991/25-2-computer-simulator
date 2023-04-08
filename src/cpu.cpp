#include "cpu.h"
#include <numeric>

int64_t Cpu::compute(Ram& ram) const
{
	int64_t* arr = ram.read();
	return std::accumulate(arr, arr + N, 0);
}