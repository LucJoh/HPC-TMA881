#include <stdio.h>

int main(int argc, char *argv[]) {

	int size = 10;
	int matrix[size][size];

	for(int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = i*j;
		}
	}

	FILE *file = fopen("matrix.dat", "w"); 
    
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

	fwrite((void*) matrix, sizeof(int), size*size, file);
	fclose(file);
	
	printf("Matrix written to matrix.dat\n");

return 0;

}
