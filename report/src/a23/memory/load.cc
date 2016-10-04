#include "memory.ih"

int Memory::load(size_t address) const
{
	return address < SIZE ? data.d_values[address] :
		UNDEFINED;
}
