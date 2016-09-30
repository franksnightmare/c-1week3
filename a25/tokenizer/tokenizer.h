#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "enum.h"

class tokenizer
{

    public:

	void reset();
	int value();
    	Opcode opcode();
    	OperandType token();	

    private:

	int d_value;

};
        
#endif
