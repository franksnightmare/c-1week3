#include "cpu.h"

int main()
{
	Memory memory;
	CPU cpu(memory);
	cpu.start();
}
