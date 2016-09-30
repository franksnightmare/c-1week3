#include "cpu.h"

CPU::start()
{
	while (true)
	{
		int opCode = Tokenizer.opcode();
		switch (opCode)
		{
			case (ERR):
				error();
				Tokenizer.reset();
				break;
			case (MOV):
				mov();
				Tokenizer.reset();
				break;
			case (ADD):
				add();
				Tokenizer.reset();
				break;
			case (SUB):
				sub();
				Tokenizer.reset();
				break;
			case (MUL):
				mul();
				Tokenizer.reset();
				break;
			case (DIV):
				div();
				Tokenizer.reset();
				break;
			case (NEG):
				neg();
				Tokenizer.reset();
				break;
			case (DSP):
				dsp();
				Tokenizer.reset();
				break;
			case (STOP)
				stop();
				Tokenizer.reset();
				break;			
		}
		Tokenizer.reset();
	}
}
