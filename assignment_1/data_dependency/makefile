.PHONY : all
all : data_dependency_O0 data_dependency_O2 data_dependency_O2_native data_dependency_unrolled2_O0 data_dependency_unrolled2_O2 data_dependency_unrolled2_O2_native data_dependency_unrolled4_O0 data_dependency_unrolled4_O2 data_dependency_unrolled4_O2_native data_dependency_unrolled8_O0 data_dependency_unrolled8_O2 data_dependency_unrolled8_O2_native data_dependency_unrolled4_modified_O0 data_dependency_unrolled4_modified_O2 data_dependency_unrolled4_modified_O2_native

data_dependency_O0 : data_dependency.c
	gcc -O0 -o $@ $< 

data_dependency_O2 : data_dependency.c
	gcc -O2 -o $@ $< 

data_dependency_O2_native : data_dependency.c
	gcc -O2 -march=native -o $@ $< 

data_dependency_unrolled2_O0 : data_dependency_unrolled2.c
	gcc -O0 -o $@ $< 

data_dependency_unrolled2_O2 : data_dependency_unrolled2.c
	gcc -O2 -o $@ $< 

data_dependency_unrolled2_O2_native : data_dependency_unrolled2.c
	gcc -O2 -march=native -o $@ $< 

data_dependency_unrolled4_O0 : data_dependency_unrolled4.c
	gcc -O0 -o $@ $< 

data_dependency_unrolled4_O2 : data_dependency_unrolled4.c
	gcc -O2 -o $@ $< 

data_dependency_unrolled4_O2_native : data_dependency_unrolled4.c
	gcc -O2 -march=native -o $@ $< 

data_dependency_unrolled8_O0 : data_dependency_unrolled8.c
	gcc -O0 -o $@ $< 

data_dependency_unrolled8_O2 : data_dependency_unrolled8.c
	gcc -O2 -o $@ $< 

data_dependency_unrolled8_O2_native : data_dependency_unrolled8.c
	gcc -O2 -march=native -o $@ $< 

data_dependency_unrolled4_modified_O0 : data_dependency_unrolled4_modified.c
	gcc -O0 -o $@ $< 

data_dependency_unrolled4_modified_O2 : data_dependency_unrolled4_modified.c
	gcc -O2 -o $@ $< 

data_dependency_unrolled4_modified_O2_native : data_dependency_unrolled4_modified.c
	gcc -O2 -march=native -o $@ $< 

.PHONY : clean
clean :
	rm -rf data_dependency_O0 data_dependency_O2 data_dependency_O2_native data_dependency_unrolled2_O0 data_dependency_unrolled2_O2 data_dependency_unrolled2_O2_native data_dependency_unrolled4_O0 data_dependency_unrolled4_O2 data_dependency_unrolled4_O2_native data_dependency_unrolled8_O0 data_dependency_unrolled8_O2 data_dependency_unrolled8_O2_native data_dependency_unrolled4_modified_O0 data_dependency_unrolled4_modified_O2 data_dependency_unrolled4_modified_O2_native
















