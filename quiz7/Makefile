CC=g++
CFLAGS=-I.
DEPS = coordinate.hpp rectangle.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o coordinate.o rectangle.o
	$(CC) -o main main.o coordinate.o rectangle.o
clean: 
	bin/rm -rf *.o a.out