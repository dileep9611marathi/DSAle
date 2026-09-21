#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *curent;


};

int main()
{
    struct node n1,n2,n3;
    printf("Enter the data for node 1:");
    scanf("%d",&n1.data);
    printf("Enter the data for node 2:");
    scanf("%d",&n2.data);
    printf("Enter the data for node 3:");
    scanf("%d",&n3.data);
    n1.next=&n2;
    n1.next->next =&n3;
    n1.next->next->next = NULL;
    printf("address of n1 %p\n",&n1);
    printf("address of n2%p\n",n1.next);
    printf("address of n2 %p\n",&n2);
    printf("data of 2nd node %d\n",n1.next->data);
    printf("address of the 3rd node %p\n",(void*)n1.next->next);
    printf("data of the  3rd node %d\n",n1.next->next->data);
    struct node *current =&n1;
    for(int i=0;i<3;i++)
    {
        printf("data of node %d is %d\n",i+1,current->data);
        current=current->next;
    }
   
    // doing the same using the while loop
    while(current!=NULL)
    {
        printf("data of node is %d\n",current->data);
        current = current->next;
    }


    return 0;
}