#ifndef INCLUDED_MEMORY_H_
#define INCLUDED_MEMORY_H_

#include <iostream>

class Memory
{
	private:
		size_t const s_SIZE = 20;
		
		unsigned int d_values[];
	
	public:
		Memory();
		Memory(unsigned int values[]);
		
		void store(size_t address, 
			unsigned int value);
		
		unsigned int const load(size_t address) const;
};

#endif
