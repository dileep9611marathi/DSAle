// write a program to cretae linked list  10,20,30 and print the elements of linked list traversal
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *next;
    int data;
};

int main()
{
    struct node *n1,*n2,*n3,*n4;

    n1=(struct node*)malloc(sizeof(struct node));
    n1->data =10;
    n2=(struct node*)malloc(sizeof(struct node));
    n2->data =20;
    n3=(struct node*)malloc(sizeof(struct node));
    n3->data=30;
    n4=(struct node*)malloc(sizeof(struct node));
    n4->data=40;
     
    n1->next =n2;
    n2->next =n3;
    n3->next =n4;
    n4->next =NULL;

    struct node *temp = n1;
    while(temp!=NULL)
    {
        printf("%d  \n",temp->data);
        temp=temp->next;
    }

    
return 0;


}

