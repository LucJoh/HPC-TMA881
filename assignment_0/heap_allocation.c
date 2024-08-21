#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int size = 100000000; //array size too big for stack but works for heap
	int * as = (int*) malloc(sizeof(int) * size);

	for ( size_t ix = 0; ix < size; ++ix )
  		as[ix] = 0;

	printf("%d\n", as[0]);
	free(as);
	
return 0;	

}	
