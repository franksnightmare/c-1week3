#include "tokenizer.ih"
#include "../enums/enums.h"

Opcode Tokenizer::opcode()
{
	string input;
	cin >> input;
	
	if (input.compare("mov") == 0)
		return MOV;
	if (input.compare("add") == 0)
		return ADD;	     
	if (input.compare("sub") == 0)
		return SUB;	     
	if (input.compare("mul") == 0)
		return MUL;	     
	if (input.compare("div") == 0)
		return DIV;	     
	if (input.compare("neg") == 0)
		return NEG;	     
	if (input.compare("dsp") == 0)
		return DSP;	     
	if (input.compare("stop") == 0)
		return STOP;	     
	return ERR;
}
