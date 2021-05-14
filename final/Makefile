CC=g++
CFLAGS=-I.
DEPS = student.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: q3.o student.o 
	$(CC) -o q3 q3.o student.o
clean: 
	bin/rm -rf *.o a.out