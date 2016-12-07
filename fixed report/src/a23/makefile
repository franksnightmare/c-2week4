UWL = addword.o findword.o capacity.o capacityconst.o operator=.o size.o sizeconst.o swap.o
MAIN = printer1.o printer2.o reader.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: uwl/%.cc uwl/uniquewordlist.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: %.cc main.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MAIN) $(UWL) uwl/uniquewordlist.h main.h
	g++ -std=c++11 -Wall -o main main.cc $(MAIN) $(UWL) uwl/uniquewordlist.h main.h
