#include<stdio.h>
int n;

int sumd(int n){
if(n==0)
{
    return 0;
}
 return (n%10)+sumd(n/10);
}

int main(){
printf("Enter the value for n:\n");
scanf("%d",&n);
int res = sumd(n);
printf("sum of digits:%d",res);

}