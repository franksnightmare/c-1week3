#ifndef INCLUDED_MEMORY_H
#define INCLUDED_MEMORY_H

#include <iostream>
#include "../enum.h"

struct Data
{
	signed int d_values[RAM::SIZE];
};

class Memory
{
	private:
		size_t const s_SIZE = RAM::SIZE;
		Data data;
	
	public:
		Memory();
		
		void store(size_t address, 
			signed int value);
		
		signed int load(size_t address) const;
};

#endif
