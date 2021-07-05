#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>



/* 
void initArray(int** array,int xSize, int ySize){
	
	//int* array = malloc(sizeof(int*)*xSize);

	for (int i = 0; i < ySize; i++)
	{
		array[i] = malloc(sizeof(int*)*ySize);
		
		for (int j = 0; j < ySize; j++)
		{
			array[i][j] = malloc(sizeof(int));
			array[i][j] = -1;
		}
	}
	return;
} */

int main(int argc, char** argv){
	//int xSize = 10;
	//int ySize = 10;
	int array[10][10];
	array[0][0] = 99;
	///int** sarr = malloc(sizeof(char*)*xSize*ySize);
	
	printf("mimi %d\r\n",array[0][0]);
	


}
