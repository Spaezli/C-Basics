#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node{
    int data;
    struct node* next;
};

void addToList(int i, struct node* n){
    //if next node already exist
    if(n->data <= 0){
        n ->data = i;
        n->next = NULL;
    }else{ //create a new node 
        struct node* newNode = malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = NULL;
        //go to the bottom of the linked list
        while(n->next != NULL){
            n = n->next;
        }
        //place the new node at the end of our linked list
        n->next = newNode;
    }

}

void printList(struct node* n){
    struct node* head = n;
    while (head != NULL){
        printf("%d",head->data);
        head = head->next;
    }
    printf("\n");
}


int main(int argc, char** argv){
	printf("Hi");
    struct node* n = malloc(sizeof(struct node));
    for (int i = 0; i < 10; i++)
    {
        addToList(i,n);
    }
    
    printList(n);
}




