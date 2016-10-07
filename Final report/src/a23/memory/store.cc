#include "memory.ih"

void Memory::store(size_t address, 
	int value)
{
	if (address < SIZE)
		data.d_values[address] = value;
}
