#include <stddef.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

//source: https://www.youtube.com/watch?v=uA8X5zNOGw8

void* myturn(void * arg){
	while(1){
		sleep(1);
		printf("My Turn\n");
	}
	return NULL;
}

void yourturn(){
	while (1)
	{
		sleep(1);
		printf("Your Turn\n");
	}
}




int main(int argc, char** argv){

	printf("Hi");

	pthread_t newthread;

	pthread_create(&newthread, NULL,myturn,NULL);

	yourturn();

	

}
