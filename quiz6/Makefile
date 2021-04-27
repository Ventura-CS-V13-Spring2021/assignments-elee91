CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o InterArray.o 
	$(CC) -o main main.o InterArray.o
clean: 
	bin/rm -rf *.o a.out