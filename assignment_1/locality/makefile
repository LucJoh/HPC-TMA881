.PHONY : all
all : locality_row_O0 locality_row_O2 locality_row_O2_native locality_col_O0 locality_col_O2 locality_col_O2_native locality_col_modified_O0 locality_col_modified_O2 locality_col_modified_O2_native

locality_row_O0 : locality_row.c
	gcc -O0 -o $@ $< 

locality_row_O2 : locality_row.c
	gcc -O2 -o $@ $< 

locality_row_O2_native : locality_row.c
	gcc -O2 -march=native -o $@ $< 

locality_col_O0 : locality_col.c
	gcc -O0 -o $@ $< 

locality_col_O2 : locality_col.c
	gcc -O2 -o $@ $< 

locality_col_O2_native : locality_col.c
	gcc -O2 -march=native -o $@ $< 

locality_col_modified_O0 : locality_col_modified.c
	gcc -O0 -o $@ $< 

locality_col_modified_O2 : locality_col_modified.c
	gcc -O2 -o $@ $< 

locality_col_modified_O2_native : locality_col_modified.c
	gcc -O2 -march=native -o $@ $<

.PHONY : clean
clean :
	rm locality_row_O0 locality_row_O2 locality_row_O2_native locality_col_O0 locality_col_O2 locality_col_O2_native locality_col_modified_O0 locality_col_modified_O2 locality_col_modified_O2_native
















