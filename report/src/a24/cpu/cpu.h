#ifndef EX24_H_
#define EX24_H_

#include "enum.h"

class CPU
{	
	struct Operand
	{
		OperandType type;
		int value;
	}
	
	int const d_NREGISTERS = 5;
	char d_REGISTER[NREGISTERS];
	Memory d_memory;
	
	private:
		bool error();
		void mov();
		void add();
		void sub();
		void mul();
		void div();
		void neg();
		void dsp();
		void stop();
		
	public:
		CPU(Memory &memory);
		void start();
};

#endif
