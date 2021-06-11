#include <stddef.h>
#include <stdlib.h>

#include <unistd.h>
#include <stdio.h>

//source: https://www.youtube.com/watch?v=g1N_ttH0FQE&t=777s


int add(int a, int b){
	return a + b;
}




int main(int argc, char** argv){

	printf("standard function: %d\n",add(5,6));

	int (*plus)(int,int) = add;
	printf("with function pointer: %d\n",plus(2,3));

	typedef int (*addition_func)(int, int);
	addition_func plusa = add;
	printf("with function pointer as its own type: %d\n",plusa(3,3));
	


}
