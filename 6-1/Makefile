CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o IntegerArray.o 
	$(CC) -o main main.o IntegerArray.o
clean: 
	bin/rm -rf *.o a.out