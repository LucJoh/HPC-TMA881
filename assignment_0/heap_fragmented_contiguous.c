#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	///////////////////////////////////////////
	///////////// CONTUGUOUS //////////////////
	///////////////////////////////////////////

	int size = 10;

	int * asentries = (int*) malloc(sizeof(int) * size*size); //allocate the whole 10*10 array at once which will make the rows contiguous
	int ** as = (int**) malloc(sizeof(int*) * size);
	for ( size_t ix = 0, jx = 0; ix < size; ++ix, jx+=size )
		as[ix] = asentries + jx;

	for ( size_t ix = 0; ix < size; ++ix )
		for ( size_t jx = 0; jx < size; ++jx )
			as[ix][jx] = 14;

	printf("%d\n", as[0][0]);

	free(as);
	free(asentries);


	///////////////////////////////////////////
	///////////// FRAGMENTED //////////////////
	///////////////////////////////////////////
/*
	int size = 10;

	int ** as = (int**) malloc(sizeof(int*) * size);
	for ( size_t ix = 0; ix < size; ++ix )
		as[ix] = (int*) malloc(sizeof(int) * size);

	for ( size_t ix = 0; ix < size; ++ix )
		for ( size_t jx = 0; jx < size; ++jx )
			as[ix][jx] = 0;

	printf("%d\n", as[0][0]);

	for ( size_t ix = 0; ix < size; ++ix )
		free(as[ix]);
	free(as);
*/
	return 0;

}
