#include "tokenizer.ih"
#include "../enums/enums.h"

OperandType Tokenizer::token()
{
	string input;
	cin >> input;
	
	char firstChar = input[0];
	if (firstChar >= 'a' && firstChar <= 'z' && input.length() == 2)
	{
		d_value = firstChar - 'a';
		return REGISTER;
	}
	
	OperandType output = SYNTAX;
	if (firstChar == '-' || (firstChar >= '0' && firstChar <= '9'))
		output = VALUE;
	if (firstChar == '@')
		output = MEMORY;
	if (output == SYNTAX)
		return output;
	
	for (int index = 1; index != input.length(); ++index)
	{
		if (input[index] == 0)
			break;
		if (input[index] < '0' || input[index] > '9')
			return SYNTAX;
	}
	if (output == MEMORY)
	{
		string address = input.substr(1, input.length() - 1);
		d_value = stoi(address);
	}	
	else
		d_value = stoi(input);
	return output;
}
