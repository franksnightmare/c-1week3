#include "cpu/cpu.ih"

int main()
{
	Memory memory;
	CPU cpu(memory);
	cpu.start();
}
