#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	size_t size = 1000000;

	int a = 350;
	int *x = (int *)malloc(size * sizeof(int));
	int *y = (int *)malloc(size * sizeof(int));
	int *p = (int *)malloc(size * sizeof(int));

	clock_t start, end;
	double time;
	double avg;

	for ( size_t i = 0; i < size; i++  )
		p[i] = i;

	for ( size_t i = 0; i < size; i++  )
		x[i] = 3;

	start = clock();
	for (int z = 0; z < 1500; z++) {
		for ( size_t k = 0; k < size; k++ ) {
			//size_t j = p[k];
			y[k] += a * x[k]; // k
		}
	}
	end = clock();
	time = ((double) (end - start)) / (CLOCKS_PER_SEC);

	printf("y[0] = %i\n", y[1000]);
	printf("direct : %f seconds\n", time);

	free(x);
	free(y);

	return 0;

}
