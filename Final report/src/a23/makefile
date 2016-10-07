MEMORY = memory1.o load.o store.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: memory/%.cc memory/memory.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MEMORY) enum.h
	g++ -std=c++11 -Wall -o main $<
