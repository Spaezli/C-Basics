#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


struct page_table
{
  int *entries; //pointer to array with entries
  //int isInit;
  //TODO int *processIDs;
};


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

void inittlb(struct page_table* tlb,int size){
	tlb->entries = malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++)
	{
		tlb->entries[i]=-1;
	}
	return;
}





int main(int argc, char** argv){
	printf("Hi");
	int size = 10;
	int* array = NULL;
	struct page_table tlb;
	
	initArray(&array,size);
	inittlb(&tlb,size);

	
	// array = (int*) malloc(sizeof(int)*size);
	// if (array==NULL) {printf("failed");
	// }else{
	// 	printf("sucess");
	// }
	// for (int i = 0; i < size; i++)
	// {
	// 	array[i]=i;
	// }

	
	for (int i = 0; i < size; i++)
	{
	printf("%d\n",array[i]);
	}

	for (int i = 0; i < size; i++)
	{
	printf("%d\n",tlb.entries[i]);
	}

}
