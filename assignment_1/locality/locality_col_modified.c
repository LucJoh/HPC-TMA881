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
		for ( size_t j = 0; j < size; j++ ) {
			double sum1 = 0.;
			double sum2 = 0.;
			double sum3 = 0.;
			double sum4 = 0.;
			double sum5 = 0.;
			double sum6 = 0.;
			double sum7 = 0.;
			double sum8 = 0.;
			double sum9 = 0.;
			double sum10 = 0.;
			for ( size_t i = 0; i < size; i+=10 ) {
				sum1 += row[i+0][j];
				sum2 += row[i+1][j];
				sum3 += row[i+2][j];
				sum4 += row[i+3][j];
				sum5 += row[i+4][j];
				sum6 += row[i+5][j];
				sum7 += row[i+6][j];
				sum8 += row[i+7][j];
				sum9 += row[i+8][j];
				sum10 += row[i+9][j];
			}
				sums[j] = sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
		} 
	}
	end = clock();
	time = ((double) (end - start)) / (CLOCKS_PER_SEC);

	printf("sums[0] = %f seconds\n", sums[0]);
	printf("locality_col_modified : %f\n", time);

	free(matrix);
	free(row);

	return 0;

}
