// implement the list using the dynamic memory allocation in c
// dynamic memory alloction
// malloc
// calloc
// free()

// so for linked list we will use malloc
// to use this memory allocation we need to include stdlib.h

// syntax for malloc
// newnode =malloc(sizeof(struct node))
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next; 
};

int main()
{
    struct node *newnode1;
    struct node *newnode2;
    struct node *newnode3;

    newnode1 = (struct node*)malloc(sizeof(struct node));
    newnode1->data = 10;

    newnode2 = (struct node*)malloc(sizeof(struct node));
    newnode2->data =20;
    
    newnode3 = (struct node*)malloc(sizeof(struct node));
    newnode3->data =30;

    newnode1->next =newnode2;
    newnode1->next->next = newnode3;

    printf("%d \n",newnode1->data);
    printf("%p \n",newnode1);
    printf("%d \n",newnode1->next->data);
    printf("%p \n",newnode1->next);
    printf("%d \n ",newnode1->next->next->data);
    printf("%p \n ",newnode1->next->next);

    return 0;
}
