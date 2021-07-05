#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int someFunction(int test){
	test++;
	return test;
}



int main(int argc, char** argv){
	printf("Hi ");
	int out = someFunction(1);
	printf("%d\n",out);
}
