.PHONY : all
all : same_file different_file inlined_manually

same_file : same_file.c
	gcc -O2 -o $@ $<

different_file : different_file.c different_file_mul.c
	gcc -O2 -o $@ $^

inlined_manually : inlined_manually.c
	gcc -O2 -o $@ $<

.PHONY : clean
clean :
	rm -f same_file different_file inlined_manually
















