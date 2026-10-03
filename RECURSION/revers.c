#include<stdio.h>

int revd(int n,int rev){
    if(n==0)
    return rev;
    rev = rev*10+n%10;
    return revd(n/10,rev);
}

int main(){
    int rev;
    int n;
    int res;
    printf("enter a number :");
    scanf("%d",&n);
    printf("Enter Numbre :%d",n);
    res =revd(n,0);
    printf(" \n Reversed Number :%d",res);
    return 0;

}