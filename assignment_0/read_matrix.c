#include <stdio.h>

int main(int argc, char *argv[]) {

	int size = 10;
	int matrix[size][size];

	FILE *file = fopen("matrix.dat", "r"); 
    
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

	fread((void*) matrix, sizeof(int), size*size, file);
	fclose(file);

  printf("Read from matrix.dat: \n");
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
    	printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
	
return 0;

}
