#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {

	clock_t start, end;
	double time;
	double avg;

	int size = 1000;
	double sums[size];
	double *matrix = (double*) malloc(sizeof(double) * size*size);
	double **row = (double**) malloc(sizeof(double*) * size);
	for (size_t i = 0, j = 0; i < size; ++i, j+=size)
		row[i] = matrix + j;

	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
			row[i][j] = 1.0;

	start = clock();
	for (int k = 0; k < 5000; k++) {
		for ( size_t i = 0; i < size; i++ ) {
			double sum[4] = {0.,0.,0.,0.};
			for ( size_t j = 0; j < size; j += 4 ) {
				sum[0] += row[i][j];
				sum[1] += row[i][j+1];
				sum[2] += row[i][j+2];
				sum[3] += row[i][j+3];
			}
			sums[i] = sum[0] + sum[1] + sum[2] + sum[3];
		}
	}
	end = clock();
	time = ((double) (end - start)) / (CLOCKS_PER_SEC);

	printf("sums[0] = %f\n", sums[0]);
	printf("unrolled4_modified : %f seconds\n", time);

	free(matrix);
	free(row);

	return 0;

}
