#include<stdio.h>
int n;

int  sumofnumbers(int n){
if(n==0)
{
    return 0 ;
}
 return n+sumofnumbers(n-1);
}

int main(){
printf("Enter the value for n:\n");
scanf("%d",&n);
int res = sumofnumbers(n);
printf("SUM :%d",res);

}