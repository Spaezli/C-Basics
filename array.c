#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void initArray(int** pointer,int size){
	*pointer = (int*) malloc(sizeof(int)*size);
	if (*pointer==NULL) {printf("failed");
	}else{
		printf("sucess");
	}
	for (int i = 0; i < size; i++)
	{
		(*pointer)[i]=i;
	}
	
	return;
}



int main(int argc, char** argv){
	printf("Hi");
	int size = 10;
	int* array = NULL;

	initArray(&array,size);
	
	for (int i = 0; i < size; i++)
	{
	printf("%d\n",array[i]);
	}
}