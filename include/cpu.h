#pragma once
#include "functions.h"
#include "ram.h"

class Cpu {
public:
	int64_t compute(Ram& ram) const;
};