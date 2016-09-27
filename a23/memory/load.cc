#include "memory.ih"

unsigned int const Memory::load(size_t address) const;
{
	if (address >= 0 && address < SIZE)
		return d_values[address];
	return UNDEFINED;
}
