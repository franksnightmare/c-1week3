MEMORY = memory1.o load.o store.o
CPU = cpu.o start.o error.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: cpu/%.cc cpu/cpu.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: memory/%.cc memory/memory.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MEMORY) $(CPU) enum.h
	g++ -std=c++11 -Wall -o main $<
