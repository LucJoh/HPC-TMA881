.PHONY : all
all : indirect_addressing_linear_O0 indirect_addressing_linear_O2 indirect_addressing_linear_O2_native indirect_addressing_jumps_O0 indirect_addressing_jumps_O2 indirect_addressing_jumps_O2_native direct_addressing_O0 direct_addressing_O2 direct_addressing_O2_native

indirect_addressing_linear_O0 : indirect_adressing_linear.c
	gcc -O0 -o $@ $< 

indirect_addressing_linear_O2 : indirect_adressing_linear.c
	gcc -O2 -o $@ $< 

indirect_addressing_linear_O2_native : indirect_adressing_linear.c
	gcc -O2 -march=native -o $@ $< 

indirect_addressing_jumps_O0 : indirect_adressing_jumps.c
	gcc -O0 -o $@ $< 

indirect_addressing_jumps_O2 : indirect_adressing_jumps.c
	gcc -O2 -o $@ $< 

indirect_addressing_jumps_O2_native : indirect_adressing_jumps.c
	gcc -O2 -march=native -o $@ $< 

direct_addressing_O0 : direct_adressing.c
	gcc -O0 -o $@ $< 

direct_addressing_O2 : direct_adressing.c
	gcc -O2 -o $@ $< 

direct_addressing_O2_native : direct_adressing.c
	gcc -O2 -march=native -o $@ $<

.PHONY : clean
clean :
	rm indirect_addressing_linear_O0 indirect_addressing_linear_O2 indirect_addressing_linear_O2_native indirect_addressing_jumps_O0 indirect_addressing_jumps_O2 indirect_addressing_jumps_O2_native direct_addressing_O0 direct_addressing_O2 direct_addressing_O2_native
















