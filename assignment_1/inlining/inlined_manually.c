#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));

	double *as_re = (double *)malloc(30000 * sizeof(double));
	double *as_im = (double *)malloc(30000 * sizeof(double));
	double *bs_re = (double *)malloc(30000 * sizeof(double));
	double *bs_im = (double *)malloc(30000 * sizeof(double));
	double *cs_re = (double *)malloc(30000 * sizeof(double));
	double *cs_im = (double *)malloc(30000 * sizeof(double));

	clock_t start, end;
	double time;
	double avg;

	for (int i = 0; i < 30000; i++) {

		bs_re[i] = rand() % (100 + 1 - 0) + 0;
		bs_im[i] = rand() % (100 + 1 - 0) + 0;
		cs_re[i] = rand() % (100 + 1 - 0) + 0;
		cs_im[i] = rand() % (100 + 1 - 0) + 0;


	}

	start = clock();
	for (int j = 0; j < 200000; j++) {
		for (int k = 0; k < 30000; k++) {

			as_re[k] = (bs_re[k] * cs_re[k]) - (bs_im[k] * cs_im[k]);
			as_im[k] = (bs_re[k] * cs_im[k]) + (bs_im[k] * cs_re[k]);

		}
	}
	end = clock();
	time = ((double) (end - start)) / (CLOCKS_PER_SEC);

	printf("Third entry\n");
	printf("bs = %f j%f\n", bs_re[2], bs_im[2]);
	printf("cs = %f j%f\n", cs_re[2], cs_im[2]);
	printf("Result : %f j%f\n",as_re[2], as_im[2]);

	printf("inlined_manually time : %f seconds\n", time);

	free(as_re);
	free(as_im);
	free(bs_re);
	free(bs_im);
	free(cs_re);
	free(cs_im);

	return 0;
}

