#include<stdio.h>
struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node n1,n2,n3;

    //assign values

    n1.data =10;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    printf("%enter the value for n1:");
    scanf("%d",&n1.data);
    printf("enter thevalue of n2:");
    scanf("%d",&n2.data);
    printf("enter the value of n3:");
    scanf("%d",&n3.data);

    printf("%d \n",n1.data);
    printf("%d \n",n1.next->data);
    printf("%d \n ",n1.next->next->data);
    

    return 0;
}