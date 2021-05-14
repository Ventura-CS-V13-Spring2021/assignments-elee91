CC=g++
CFLAGS=-I.
DEPS = student.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o student.o 
	$(CC) -o main main.o student.o
clean: 
	bin/rm -rf *.o a.out