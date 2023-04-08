#include "ram.h"



void Ram::write(int64_t arr[N])
{
	for (int64_t i = 0; i < N; i++)
	{
		m_arr[i] = arr[i];
	}
}

//*************************************************************

int64_t* Ram::read()
{
	return m_arr;
}

