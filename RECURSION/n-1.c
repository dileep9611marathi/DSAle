#include<stdio.h>
int n;
void printNumbers(int n){
//base case
if(n==0){
    return;
}
printf("%d ",n);
printNumbers(n-1);

}

int main(){
    
    printf("Enter the value for n: \n");
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}