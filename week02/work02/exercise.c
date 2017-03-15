/*
 * Name: Jonathan Prasetya Wijaya
 * NPM: 1506725041
 * Class:  
 * Comment: C is cool
 */

#define LOOP 4

#include <stdio.h>

void main() {
	int input = 3;
	int result,i;
	for(i=0; i<4; i++){
		result+=input;
	}
	printf("%d times %d equals %d\n", input,LOOP,result);
}
