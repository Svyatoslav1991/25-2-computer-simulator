#pragma once
#include "ram.h"

class Disk {
public:
	void save(Ram& ram) const;
	void load(Ram& ram) const;
};