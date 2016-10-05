#ifndef TOKENIZER_H_
#define TOKENIZER_H_

#include "../enums/enums.h"

class Tokenizer
{
	Tokenizer();
	static int d_value;

    public:

	static void reset();
	static int value();
	static Opcode opcode();
	static OperandType token();	

};
        
#endif
