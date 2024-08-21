.PHONY : all
all : stack_allocation heap_allocation heap_fragmented_contiguous write_matrix read_matrix parsing benchmarking_O0 benchmarking_O1 benchmarking_O2 benchmarking_O3 benchmarking_Og benchmarking_Os

stack_allocation : stack_allocation.c
	gcc -o stack_allocation stack_allocation.c

heap_allocation : heap_allocation.c 
	gcc -o heap_allocation heap_allocation.c

heap_fragmented_contiguous : heap_fragmented_contiguous.c
	gcc -o heap_fragmented_contiguous heap_fragmented_contiguous.c

write_matrix : write_matrix.c
	gcc -o write_matrix write_matrix.c

read_matrix : read_matrix.c
	gcc -o read_matrix read_matrix.c

parsing : parsing.c
	gcc -o parsing parsing.c

benchmarking_O0 : benchmarking.c
	gcc -o benchmarking_O0 benchmarking.c -O0

benchmarking_O1 : benchmarking.c
	gcc -o benchmarking_O1 benchmarking.c -O1

benchmarking_O2 : benchmarking.c
	gcc -o benchmarking_O2 benchmarking.c -O2

benchmarking_O3 : benchmarking.c
	gcc -o benchmarking_O3 benchmarking.c -O3

benchmarking_Og : benchmarking.c
	gcc -o benchmarking_Og benchmarking.c -Og

benchmarking_Os : benchmarking.c
	gcc -o benchmarking_Os benchmarking.c -Os

clean :
	rm stack_allocation heap_allocation heap_fragmented_contiguous write_matrix read_matrix parsing benchmarking_O0 benchmarking_O1 benchmarking_O2 benchmarking_O3 benchmarking_Og benchmarking_Os
