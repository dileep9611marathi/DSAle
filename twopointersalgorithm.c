#include<stdio.h>

int main()
{
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = arr;
    int *left =arr;
    int *right =arr+9;
    

    while(left<right)
    {
       int temp =*left;
        *left = *right;
        *right = temp;
        left++;
        right--;

    }
    for(int i=0;i<10;i++)
    {
        printf("%d",*(ptr+i));
    }
    return 0;
}