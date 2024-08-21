.PHONY : all
all : valgrind gdb

valgrind : valgrind.c
	gcc -O0 -g -o $@ $<

gdb : gdb.c
	gcc -O0 -g -o $@ $<

clean :
	rm -f valgrind gdb

















