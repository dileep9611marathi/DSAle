#include<stdio.h>

int main()
{
    int arr[50] = {1,2,3,4,5,6,7,8,9,10};
    int odd =0,even = 0;
    int *ptr  = arr;

    for(int i=0;i<10;i++)
    {
        if((*ptr+i)%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

    }
    printf("total even numbers are %d\n",even);
    printf("total odd numbers are %d\n",odd);
    return 0;

}