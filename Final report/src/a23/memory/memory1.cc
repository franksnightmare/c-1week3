#include "memory.ih"

Memory::Memory()
//:
{
	for (size_t index = 0; index != s_SIZE; ++index)
	{
		store(index, UNDEFINED);
	}
}
