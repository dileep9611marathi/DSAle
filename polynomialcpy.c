#include<stdio.h>
//Declaring Steucture For Every Term
struct term {
    int coefficient;
    int exponent;

};


int main(){
    struct term polynomial[10];
    int n;

    printf("Enter The Numbers OfTerm:\n");
    scanf("%d",&n);
    // Taking The Input In The Polynomial Array
    for(int i=0;i<n;i++){
        printf("Term: %d\n ",i+1);
        printf("Enter The coefficient:");
        scanf("%d",&polynomial[i].coefficient);
        printf("Enter The Exponent:");
        scanf("%d",&polynomial[i].exponent);

    }
    // to priint polynomial as:1x^4+2x^3+3x^2+4x^1
    for(int i=0;i<n;i++)
    {  
        printf("%dx^%d",polynomial[i].coefficient,polynomial[i].exponent);
        if(i<n-1)
        {
            printf("+");
        }
    }

    // to print the highest degree in polynomial

    int highest =polynomial[0].exponent;
    for(int i=0;i<n;i++)
    {
        if(polynomial[i].exponent > highest)
        {
            highest = polynomial[i].exponent;
        }
    }
    
    // highest degree
     printf("\nThe Highest Degree:%d",highest);

    return 0;
}