#include "memory.ih"

void Memory::store(size_t address, unsigned int value);
{
	if (address >= 0 && address < SIZE)
		d_values[address] = value;
}
