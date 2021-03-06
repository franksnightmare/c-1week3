#ifndef EX24_H_
#define EX24_H_

#include "../memory/memory.h"
#include "../enum.h"

enum registers
{
	NREGISTERS = 5
};

class CPU
{	
	struct Operand
	{
		OperandType type;
		int value;
	};
	
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
