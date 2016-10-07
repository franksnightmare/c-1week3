#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enum.h"

class Tokenizer
{

    public:

	static void reset();
	static int value();
    static Opcode opcode();
    static OperandType token();	

    private:

	int d_value;

};
        
#endif
