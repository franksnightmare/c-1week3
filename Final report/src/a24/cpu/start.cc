#include "cpu.ih"

void CPU::start()
{
	while (true)
	{
		int opCode = Tokenizer.opcode();
		switch (opCode)
		{
			case (ERR):
				//return an error if invalid 
				//instruction
				error();
			break;
			case (MOV):
				//value of rhs operand 
				//asigned to lhs operand
				mov();
			break;
			case (ADD):
				//value of rhs operand
				//added to lhs operand
				add();
			break;
			case (SUB):
				//value of rhs operand
				//substracted from lhs operand
				sub();
			break;
			case (MUL):
				//lhs operand is multiplied
				//by the value of lhs operand
				mul();
			break;
			case (DIV):
				//lhs operand is divided
				//by the value of lhs operand
				div();
			break;
			case (NEG):
				//value negated
				neg();
			break;
			case (DSP):
				//value inserted into cout
				dsp();
			break;
			case (STOP):
				//the program ends
				stop();
			break;			
		}
		Tokenizer.reset();
	}
}
