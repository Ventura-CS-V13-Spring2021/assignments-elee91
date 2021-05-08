CC=g++
CFLAGS=-I.
DEPS = address.hpp dob.hpp student.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o address.o dob.o student.o
	$(CC) -o main main.o address.o dob.o student.o
clean: 
	bin/rm -rf *.o a.out