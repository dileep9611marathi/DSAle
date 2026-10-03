#include<stdio.h>
int n;

int fact(int n){
if(n==0)
{
    return 1 ;
}
 return n*fact(n-1);
}

int main(){
printf("Enter the value for n:\n");
scanf("%d",&n);
int res = fact(n);
printf("factorial:%d",res);

}