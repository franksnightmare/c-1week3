#include "cpu.ih"

void CPU::start()
{
	while (true)
	{
		int opCode = Tokenizer.opcode();
		switch (opCode)
		{
			case (ERR):
				error();
			break;
			case (MOV):
				mov();
			break;
			case (ADD):
				add();
			break;
			case (SUB):
				sub();
			break;
			case (MUL):
				mul();
			break;
			case (DIV):
				div();
			break;
			case (NEG):
				neg();
			break;
			case (DSP):
				dsp();
			break;
			case (STOP):
				stop();
			break;			
		}
		Tokenizer.reset();
	}
}
