#pragma once
#include "functions.h"

class Ram {
	int64_t m_arr[N] = {0};

public:
	void write(int64_t arr[N]);
	int64_t* read();
};