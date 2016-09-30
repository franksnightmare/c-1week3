#ifndef INCLUDED_ENUM_H
#define INCLUDED_ENUM_H

enum Opcode
{
	ERR,
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	NEG,
	DSP,
	STOP
};

enum OperandType
{
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
};

enum RAM
{
	SIZE = 20
};

#endif
