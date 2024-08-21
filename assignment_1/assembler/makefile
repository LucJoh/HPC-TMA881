.PHONY : all
all : benchmarkingO0.s benchmarkingO1.s benchmarkingO2.s benchmarkingO3.s benchmarkingOs.s benchmarkingOg.s

benchmarkingO0.s : benchmarking.c
	gcc -S -fverbose-asm $< -O0 -o $@

benchmarkingO1.s : benchmarking.c
	gcc -S -fverbose-asm $< -O1 -o $@

benchmarkingO2.s : benchmarking.c
	gcc -S -fverbose-asm $< -O2 -o $@

benchmarkingO3.s : benchmarking.c
	gcc -S -fverbose-asm $< -O3 -o $@

benchmarkingOs.s : benchmarking.c
	gcc -S -fverbose-asm $< -Os -o $@

benchmarkingOg.s : benchmarking.c
	gcc -S -fverbose-asm $< -Og -o $@

clean:
	rm -f *.s

















