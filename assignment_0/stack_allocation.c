#include <stdio.h>

int main(int argc, char *argv[]) {

	int size = 100000000; //array size is too big for the stack
	int as[size];

	for ( size_t ix = 0; ix < size; ++ix )
		as[ix] = 0;

	printf("%d\n", as[0]);
	
return 0;	

}	
