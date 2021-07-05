#include <stddef.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

//source: https://www.youtube.com/watch?v=uA8X5zNOGw8

void* myturn(void * arg){
	for (size_t i = 0; i < 8; i++)
	{
		sleep(1);
		printf("%d. My Turn\n",(int)i);
	}
	return NULL;
}

void yourturn(){
	for (size_t i = 0; i < 3; i++)
	{
		sleep(1);
		printf("%d. Your Turn\n",(int)i);
	}
}



//TODO!!!
int main(int argc, char** argv){

	printf("Hi");

	pthread_t newthread;

	pthread_create(&newthread, NULL,myturn,NULL);

	yourturn();
	pthread_join(newthread, NULL);
}
