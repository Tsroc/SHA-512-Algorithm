#include <stdio.h>
#include <assert.h>

// info - https://www.youtube.com/watch?v=f9EbD6iY9zI



void bin_print(unsigned int i){
	// Num of bits in an integer
	int j = sizeof(unsigned int) * 8 - 1;
	unsigned int k;

	for (; j >= 0; j--){
		k = ((1 <<j) & i) ? 1: 0;
		printf("%d", k);
	}

}
/*
 * Basic operations
 */

void shiftRight(unsigned int i, int shift){
	int j = sizeof(unsigned int) * 8;
	bin_print(i << shift % j );
	printf("\n");

}

void shiftRight_test(){
	// Should implement at a later point
}


int xor(int i, int j){
	return i^j;
}

void xor_test(){
	// This is correct in essence but it should compare a larger combined length
	assert(xor(0, 0) == 0);
	assert(xor(0, 1) == 1);
	assert(xor(1, 0) == 1);
	assert(xor(1, 1) == 0);
}

void rotateRight(unsigned int i, int x){
	// Does x rotation.
	int j = sizeof(unsigned int) * 8 - 1;

	for(j = j*x; j>0; j--){
		shiftRight(i, j);
	}

}

void rotateRight_test(){
	// Should implement at a later point
	unsigned int i = 1;
	int rotation = 1;
	printf("Start position:\n");
	bin_print(i);
	printf("\n================================\n");
	rotateRight(i, rotation);
}





/*
 *
 */



int main(int argc, char *argv[]){

	/*
	unsigned int i = 0x0f0f0f0f;

	printf("Original: : ");
	bin_print(i);
	printf("\n");
	printf("\t%x\t%u\n\n", i, i);


	for(int j =  0; j < (sizeof(int)*8); j++){
	
		//printf("(1 << 53u) & %08x: : ", j, i);
		//bin_print((1 << j) & i);
		//printf("\n");

		bin_print(1 << j); printf("\n");
		bin_print(i); printf("\n");
		printf("--------------------------------\n");
		bin_print(((i << j) & i)); printf("\n\n");

	}
	*/

	xor_test();
	shiftRight_test();
	rotateRight_test();

	return 0;
}

