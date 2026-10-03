#include<stdio.h>
int n;
void printNumbers(int n){
//base case
// if(n==0){
//     return;
// }
printNumbers(n-1);
printf("%d ",n);

}

int main(){
    
    printf("Enter the value for n: \n");
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}