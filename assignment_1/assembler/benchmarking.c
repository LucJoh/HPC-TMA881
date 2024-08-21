#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {

	clock_t start, end;
  double time[5] = {};
	double avg;

	long long int sum = 0;

	for (int j = 0; j < 5; j++) {
		start = clock();
  	for ( long long int i = 0; i < 1000000001; i++ ) {
			sum += i;
  	}
		end = clock();
		time[j] = ((double) (end - start)) / CLOCKS_PER_SEC;
	}

	avg = (time[0] + time[1] + time[2] + time[3] + time[4]) / 5;
	printf("Sum : %lli\n", sum/5);
	printf("Loop took %f seconds to execute(avg of 5 iterations)\n", avg);

  return 0;
}


