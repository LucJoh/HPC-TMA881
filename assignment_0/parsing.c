#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

	bool foundA = false;
	bool foundB = false;

	int a = 0;
	int b = 0;

	for (int i = 0; i < argc; i++) {

		foundA = false;
		foundB = false;

		for (int j = 0; j < strlen(argv[i]); j++) {

			if (argv[i][j] == 'b') {
				foundB = true;
			}

			else if (argv[i][j] == 'a') {
				foundA = true;
			}

   		for (int k = 0; k < 10; k++) {
				if ((argv[i][j]) == (k + '0'))
					if (foundA == true) { 
						a = k;
						foundA = false;
					}
				  else if (foundB == true) { 
						b = k;
						foundB = false;
					}
			}
		}
  }

	printf("A is %i\nB is %i\n", a, b);

	return 0;

}
