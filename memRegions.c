#include <stdio.h>
#include <stdlib.h>

//Static Data (keyword static outside main not necessary)
static int myGlobal = 5;
int mySecondGlobal = 10;

void f1(){
//Static Data is assigned once!
	static int b = 0;
	printf("Static Memory region: b = %d\n",b);
	b++;
}

void f2(){
//Stackmemory is assigned and freed automatically
//auto keyword is optional
    auto int a = 0;
    int b = 0;
	printf("Stack Memory region: b = %d\n",b);
}

int* f3(){
    int* ptr = (int*) malloc(sizeof(int));
    *ptr = 5;
    return ptr;
}


int main(){
	//Static stuff
    f1();
	f1();
	f1();

    //Stack stuff
    f2();
    f2();
    f2();

    //Heap stuff
    int* myPointer = f3();
	printf("Heap Memory region: myPointer contains the value = %d\n",*myPointer);
    free(myPointer);
	
    return 0;
}